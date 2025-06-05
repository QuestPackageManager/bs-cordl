#pragma once
// IWYU pragma private; include "UnityEngine/UI/Scrollbar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scrollbar)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
struct Scrollbar_Axis;
}
namespace UnityEngine::UI {
struct Scrollbar_Direction;
}
namespace UnityEngine::UI {
class Scrollbar_ScrollEvent;
}
namespace UnityEngine::UI {
class Scrollbar__ClickRepeat_d__58;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Coroutine;
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
// Forward declare root types
namespace UnityEngine::UI {
struct Scrollbar_Axis;
}
namespace UnityEngine::UI {
struct Scrollbar_Direction;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::UI {
class Scrollbar_ScrollEvent;
}
namespace UnityEngine::UI {
class Scrollbar__ClickRepeat_d__58;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::Scrollbar_Axis);
MARK_VAL_T(::UnityEngine::UI::Scrollbar_Direction);
MARK_REF_PTR_T(::UnityEngine::UI::Scrollbar);
MARK_REF_PTR_T(::UnityEngine::UI::Scrollbar_ScrollEvent);
MARK_REF_PTR_T(::UnityEngine::UI::Scrollbar__ClickRepeat_d__58);
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Scrollbar/Direction
struct CORDL_TYPE Scrollbar_Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Scrollbar_Direction_Unwrapped
  enum struct __Scrollbar_Direction_Unwrapped : int32_t {
    __E_LeftToRight = static_cast<int32_t>(0x0),
    __E_RightToLeft = static_cast<int32_t>(0x1),
    __E_BottomToTop = static_cast<int32_t>(0x2),
    __E_TopToBottom = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Scrollbar_Direction_Unwrapped() const noexcept {
    return static_cast<__Scrollbar_Direction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scrollbar_Direction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Scrollbar_Direction(int32_t value__) noexcept;

  /// @brief Field BottomToTop value: I32(2)
  static ::UnityEngine::UI::Scrollbar_Direction const BottomToTop;

  /// @brief Field LeftToRight value: I32(0)
  static ::UnityEngine::UI::Scrollbar_Direction const LeftToRight;

  /// @brief Field RightToLeft value: I32(1)
  static ::UnityEngine::UI::Scrollbar_Direction const RightToLeft;

  /// @brief Field TopToBottom value: I32(3)
  static ::UnityEngine::UI::Scrollbar_Direction const TopToBottom;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15124 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Scrollbar_Direction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Scrollbar_Direction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Scrollbar/ScrollEvent
class CORDL_TYPE Scrollbar_ScrollEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
  // Declarations
  static inline ::UnityEngine::UI::Scrollbar_ScrollEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4ac3d18, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scrollbar_ScrollEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scrollbar_ScrollEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scrollbar_ScrollEvent(Scrollbar_ScrollEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scrollbar_ScrollEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scrollbar_ScrollEvent(Scrollbar_ScrollEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15125 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Scrollbar_ScrollEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Scrollbar/Axis
struct CORDL_TYPE Scrollbar_Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Scrollbar_Axis_Unwrapped
  enum struct __Scrollbar_Axis_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Scrollbar_Axis_Unwrapped() const noexcept {
    return static_cast<__Scrollbar_Axis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scrollbar_Axis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Scrollbar_Axis(int32_t value__) noexcept;

  /// @brief Field Horizontal value: I32(0)
  static ::UnityEngine::UI::Scrollbar_Axis const Horizontal;

  /// @brief Field Vertical value: I32(1)
  static ::UnityEngine::UI::Scrollbar_Axis const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15126 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Scrollbar_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Scrollbar_Axis, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
class CORDL_TYPE Scrollbar__ClickRepeat_d__58 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UI::Scrollbar> __4__this;

  /// @brief Field camera, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field screenPosition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_screenPosition, put = __cordl_internal_set_screenPosition)) ::UnityEngine::Vector2 screenPosition;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4ac566c, size 0x258, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::Scrollbar__ClickRepeat_d__58* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x4ac58c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4ac58cc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4ac5904, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4ac5668, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_screenPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_screenPosition();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Scrollbar> value);

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_screenPosition(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x4ac4d94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scrollbar__ClickRepeat_d__58();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scrollbar__ClickRepeat_d__58", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scrollbar__ClickRepeat_d__58(Scrollbar__ClickRepeat_d__58&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scrollbar__ClickRepeat_d__58", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scrollbar__ClickRepeat_d__58(Scrollbar__ClickRepeat_d__58 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15127 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Scrollbar> _____4__this;

  /// @brief Field screenPosition, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___screenPosition;

  /// @brief Field camera, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Scrollbar__ClickRepeat_d__58, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar__ClickRepeat_d__58, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar__ClickRepeat_d__58, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar__ClickRepeat_d__58, ___screenPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar__ClickRepeat_d__58, ___camera) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Scrollbar__ClickRepeat_d__58, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.DrivenRectTransformTracker, UnityEngine.EventSystems.IBeginDragHandler, UnityEngine.EventSystems.IDragHandler, UnityEngine.EventSystems.IEventSystemHandler,
// UnityEngine.EventSystems.IInitializePotentialDragHandler, UnityEngine.UI.ICanvasElement, UnityEngine.UI.Scrollbar::Direction, UnityEngine.UI.Selectable, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Scrollbar
class CORDL_TYPE Scrollbar : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using Axis = ::UnityEngine::UI::Scrollbar_Axis;

  using Direction = ::UnityEngine::UI::Scrollbar_Direction;

  using ScrollEvent = ::UnityEngine::UI::Scrollbar_ScrollEvent;

  using _ClickRepeat_d__58 = ::UnityEngine::UI::Scrollbar__ClickRepeat_d__58;

  __declspec(property(get = get_axis)) ::UnityEngine::UI::Scrollbar_Axis axis;

  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::UI::Scrollbar_Direction direction;

  __declspec(property(get = get_handleRect, put = set_handleRect)) ::UnityW<::UnityEngine::RectTransform> handleRect;

  /// @brief Field isPointerDownAndNotDragging, offset 0x140, size 0x1
  __declspec(property(get = __cordl_internal_get_isPointerDownAndNotDragging, put = __cordl_internal_set_isPointerDownAndNotDragging)) bool isPointerDownAndNotDragging;

  /// @brief Field m_ContainerRect, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContainerRect, put = __cordl_internal_set_m_ContainerRect)) ::UnityW<::UnityEngine::RectTransform> m_ContainerRect;

  /// @brief Field m_DelayedUpdateVisuals, offset 0x141, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DelayedUpdateVisuals, put = __cordl_internal_set_m_DelayedUpdateVisuals)) bool m_DelayedUpdateVisuals;

  /// @brief Field m_Direction, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Direction, put = __cordl_internal_set_m_Direction)) ::UnityEngine::UI::Scrollbar_Direction m_Direction;

  /// @brief Field m_HandleRect, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HandleRect, put = __cordl_internal_set_m_HandleRect)) ::UnityW<::UnityEngine::RectTransform> m_HandleRect;

  /// @brief Field m_NumberOfSteps, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfSteps, put = __cordl_internal_set_m_NumberOfSteps)) int32_t m_NumberOfSteps;

  /// @brief Field m_Offset, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Offset, put = __cordl_internal_set_m_Offset)) ::UnityEngine::Vector2 m_Offset;

  /// @brief Field m_OnValueChanged, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged)) ::UnityEngine::UI::Scrollbar_ScrollEvent* m_OnValueChanged;

  /// @brief Field m_PointerDownRepeat, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerDownRepeat, put = __cordl_internal_set_m_PointerDownRepeat)) ::UnityEngine::Coroutine* m_PointerDownRepeat;

  /// @brief Field m_Size, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) float_t m_Size;

  /// @brief Field m_Tracker, offset 0x130, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracker, put = __cordl_internal_set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker m_Tracker;

  /// @brief Field m_Value, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) float_t m_Value;

  __declspec(property(get = get_numberOfSteps, put = set_numberOfSteps)) int32_t numberOfSteps;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged)) ::UnityEngine::UI::Scrollbar_ScrollEvent* onValueChanged;

  __declspec(property(get = get_reverseValue)) bool reverseValue;

  __declspec(property(get = get_size, put = set_size)) float_t size;

  __declspec(property(get = get_stepSize)) float_t stepSize;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Method ClickRepeat, addr 0x4ac4d54, size 0x40, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ClickRepeat(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method ClickRepeat, addr 0x4ac4cd0, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ClickRepeat(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Camera* camera);

  /// @brief Method DoUpdateDrag, addr 0x4ac4810, size 0x68, virtual false, abstract: false, final false
  inline void DoUpdateDrag(::UnityEngine::Vector2 handleCorner, float_t remainingSize);

  /// @brief Method FindSelectableOnDown, addr 0x4ac53c4, size 0x24, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnDown();

  /// @brief Method FindSelectableOnLeft, addr 0x4ac50d0, size 0x24, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnLeft();

  /// @brief Method FindSelectableOnRight, addr 0x4ac51cc, size 0x24, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnRight();

  /// @brief Method FindSelectableOnUp, addr 0x4ac52c8, size 0x24, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnUp();

  /// @brief Method GraphicUpdateComplete, addr 0x4ac415c, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method LayoutComplete, addr 0x4ac4158, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method MayDrag, addr 0x4ac4878, size 0x64, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::UnityEngine::UI::Scrollbar* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x4ac48dc, size 0x1b4, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDisable, addr 0x4ac4448, size 0x20, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrag, addr 0x4ac4a90, size 0x90, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEnable, addr 0x4ac4160, size 0x30, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnInitializePotentialDrag, addr 0x4ac54c0, size 0x18, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnMove, addr 0x4ac4dfc, size 0x248, virtual true, abstract: false, final false
  inline void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x4ac4b20, size 0x80, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x4ac4dbc, size 0x18, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnRectTransformDimensionsChange, addr 0x4ac45a4, size 0x38, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method Rebuild, addr 0x4ac4154, size 0x4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method Set, addr 0x4ac3f34, size 0xc4, virtual false, abstract: false, final false
  inline void Set(float_t input, bool sendCallback);

  /// @brief Method SetDirection, addr 0x4ac54d8, size 0x188, virtual false, abstract: false, final false
  inline void SetDirection(::UnityEngine::UI::Scrollbar_Direction direction, bool includeRectLayouts);

  /// @brief Method SetValueWithoutNotify, addr 0x4ac3ff8, size 0x8, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(float_t input);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x4ac5660, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method Update, addr 0x4ac4590, size 0x14, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateCachedReferences, addr 0x4ac3944, size 0xe0, virtual false, abstract: false, final false
  inline void UpdateCachedReferences();

  /// @brief Method UpdateDrag, addr 0x4ac4600, size 0x210, virtual false, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method UpdateVisuals, addr 0x4ac3a24, size 0x1b8, virtual false, abstract: false, final false
  inline void UpdateVisuals();

  constexpr bool const& __cordl_internal_get_isPointerDownAndNotDragging() const;

  constexpr bool& __cordl_internal_get_isPointerDownAndNotDragging();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_ContainerRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_ContainerRect();

  constexpr bool const& __cordl_internal_get_m_DelayedUpdateVisuals() const;

  constexpr bool& __cordl_internal_get_m_DelayedUpdateVisuals();

  constexpr ::UnityEngine::UI::Scrollbar_Direction const& __cordl_internal_get_m_Direction() const;

  constexpr ::UnityEngine::UI::Scrollbar_Direction& __cordl_internal_get_m_Direction();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_HandleRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_HandleRect();

  constexpr int32_t const& __cordl_internal_get_m_NumberOfSteps() const;

  constexpr int32_t& __cordl_internal_get_m_NumberOfSteps();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Offset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Offset();

  constexpr ::UnityEngine::UI::Scrollbar_ScrollEvent* const& __cordl_internal_get_m_OnValueChanged() const;

  constexpr ::UnityEngine::UI::Scrollbar_ScrollEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_PointerDownRepeat() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_PointerDownRepeat();

  constexpr float_t const& __cordl_internal_get_m_Size() const;

  constexpr float_t& __cordl_internal_get_m_Size();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker();

  constexpr float_t const& __cordl_internal_get_m_Value() const;

  constexpr float_t& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_isPointerDownAndNotDragging(bool value);

  constexpr void __cordl_internal_set_m_ContainerRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_DelayedUpdateVisuals(bool value);

  constexpr void __cordl_internal_set_m_Direction(::UnityEngine::UI::Scrollbar_Direction value);

  constexpr void __cordl_internal_set_m_HandleRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_NumberOfSteps(int32_t value);

  constexpr void __cordl_internal_set_m_Offset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::Scrollbar_ScrollEvent* value);

  constexpr void __cordl_internal_set_m_PointerDownRepeat(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_Size(float_t value);

  constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  constexpr void __cordl_internal_set_m_Value(float_t value);

  /// @brief Method .ctor, addr 0x4ac3c58, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_axis, addr 0x4ac45dc, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Scrollbar_Axis get_axis();

  /// @brief Method get_direction, addr 0x4ac3bdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Scrollbar_Direction get_direction();

  /// @brief Method get_handleRect, addr 0x4ac38c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_handleRect();

  /// @brief Method get_numberOfSteps, addr 0x4ac408c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numberOfSteps();

  /// @brief Method get_onValueChanged, addr 0x4ac4118, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Scrollbar_ScrollEvent* get_onValueChanged();

  /// @brief Method get_reverseValue, addr 0x4ac45ec, size 0x14, virtual false, abstract: false, final false
  inline bool get_reverseValue();

  /// @brief Method get_size, addr 0x4ac4000, size 0x8, virtual false, abstract: false, final false
  inline float_t get_size();

  /// @brief Method get_stepSize, addr 0x4ac4128, size 0x2c, virtual false, abstract: false, final false
  inline float_t get_stepSize();

  /// @brief Method get_value, addr 0x4ac3e74, size 0xb8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  /// @brief Method set_direction, addr 0x4ac3be4, size 0x74, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UI::Scrollbar_Direction value);

  /// @brief Method set_handleRect, addr 0x4ac38c8, size 0x7c, virtual false, abstract: false, final false
  inline void set_handleRect(::UnityEngine::RectTransform* value);

  /// @brief Method set_numberOfSteps, addr 0x4ac4094, size 0x84, virtual false, abstract: false, final false
  inline void set_numberOfSteps(int32_t value);

  /// @brief Method set_onValueChanged, addr 0x4ac4120, size 0x8, virtual false, abstract: false, final false
  inline void set_onValueChanged(::UnityEngine::UI::Scrollbar_ScrollEvent* value);

  /// @brief Method set_size, addr 0x4ac4008, size 0x84, virtual false, abstract: false, final false
  inline void set_size(float_t value);

  /// @brief Method set_value, addr 0x4ac3f2c, size 0x8, virtual false, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scrollbar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scrollbar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scrollbar(Scrollbar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scrollbar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scrollbar(Scrollbar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15128 };

  /// @brief Field m_HandleRect, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_HandleRect;

  /// @brief Field m_Direction, offset: 0x108, size: 0x4, def value: None
  ::UnityEngine::UI::Scrollbar_Direction ___m_Direction;

  /// @brief Field m_Value, offset: 0x10c, size: 0x4, def value: None
  float_t ___m_Value;

  /// @brief Field m_Size, offset: 0x110, size: 0x4, def value: None
  float_t ___m_Size;

  /// @brief Field m_NumberOfSteps, offset: 0x114, size: 0x4, def value: None
  int32_t ___m_NumberOfSteps;

  /// @brief Field m_OnValueChanged, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UI::Scrollbar_ScrollEvent* ___m_OnValueChanged;

  /// @brief Field m_ContainerRect, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_ContainerRect;

  /// @brief Field m_Offset, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Offset;

  /// @brief Field m_Tracker, offset: 0x130, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  /// @brief Field m_PointerDownRepeat, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_PointerDownRepeat;

  /// @brief Field isPointerDownAndNotDragging, offset: 0x140, size: 0x1, def value: None
  bool ___isPointerDownAndNotDragging;

  /// @brief Field m_DelayedUpdateVisuals, offset: 0x141, size: 0x1, def value: None
  bool ___m_DelayedUpdateVisuals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_HandleRect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Direction) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Value) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Size) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_NumberOfSteps) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_OnValueChanged) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_ContainerRect) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Offset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Tracker) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_PointerDownRepeat) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___isPointerDownAndNotDragging) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_DelayedUpdateVisuals) == 0x141, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Scrollbar, 0x148>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Scrollbar_Axis, "UnityEngine.UI", "Scrollbar/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Scrollbar_Direction, "UnityEngine.UI", "Scrollbar/Direction");
NEED_NO_BOX(::UnityEngine::UI::Scrollbar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Scrollbar*, "UnityEngine.UI", "Scrollbar");
NEED_NO_BOX(::UnityEngine::UI::Scrollbar_ScrollEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Scrollbar_ScrollEvent*, "UnityEngine.UI", "Scrollbar/ScrollEvent");
NEED_NO_BOX(::UnityEngine::UI::Scrollbar__ClickRepeat_d__58);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Scrollbar__ClickRepeat_d__58*, "UnityEngine.UI", "Scrollbar/<ClickRepeat>d__58");
