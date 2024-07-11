#pragma once
// IWYU pragma private; include "UnityEngine/UI/Scrollbar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scrollbar)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
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
class Selectable;
}
namespace UnityEngine::UI {
struct __Scrollbar__Axis;
}
namespace UnityEngine::UI {
struct __Scrollbar__Direction;
}
namespace UnityEngine::UI {
class __Scrollbar__ScrollEvent;
}
namespace UnityEngine::UI {
class __Scrollbar___ClickRepeat_d__58;
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
struct __Scrollbar__Axis;
}
namespace UnityEngine::UI {
struct __Scrollbar__Direction;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::UI {
class __Scrollbar__ScrollEvent;
}
namespace UnityEngine::UI {
class __Scrollbar___ClickRepeat_d__58;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__Scrollbar__Axis);
MARK_VAL_T(::UnityEngine::UI::__Scrollbar__Direction);
MARK_REF_PTR_T(::UnityEngine::UI::Scrollbar);
MARK_REF_PTR_T(::UnityEngine::UI::__Scrollbar__ScrollEvent);
MARK_REF_PTR_T(::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58);
// Type: ::Direction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Scrollbar::Direction
struct CORDL_TYPE __Scrollbar__Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Scrollbar__Direction_Unwrapped
  enum struct ____Scrollbar__Direction_Unwrapped : int32_t {
    __E_LeftToRight = static_cast<int32_t>(0x0),
    __E_RightToLeft = static_cast<int32_t>(0x1),
    __E_BottomToTop = static_cast<int32_t>(0x2),
    __E_TopToBottom = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Scrollbar__Direction_Unwrapped() const noexcept {
    return static_cast<____Scrollbar__Direction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Scrollbar__Direction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Scrollbar__Direction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BottomToTop value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Scrollbar__Direction const BottomToTop;

  /// @brief Field LeftToRight value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Scrollbar__Direction const LeftToRight;

  /// @brief Field RightToLeft value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Scrollbar__Direction const RightToLeft;

  /// @brief Field TopToBottom value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Scrollbar__Direction const TopToBottom;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Scrollbar__Direction, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Scrollbar__Direction, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::ScrollEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::Scrollbar::ScrollEvent*
class CORDL_TYPE __Scrollbar__ScrollEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__Scrollbar__ScrollEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35132cc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Scrollbar__ScrollEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Scrollbar__ScrollEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Scrollbar__ScrollEvent(__Scrollbar__ScrollEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Scrollbar__ScrollEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Scrollbar__ScrollEvent(__Scrollbar__ScrollEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Scrollbar__ScrollEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::Axis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Scrollbar::Axis
struct CORDL_TYPE __Scrollbar__Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Scrollbar__Axis_Unwrapped
  enum struct ____Scrollbar__Axis_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Scrollbar__Axis_Unwrapped() const noexcept {
    return static_cast<____Scrollbar__Axis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Scrollbar__Axis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Scrollbar__Axis(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Scrollbar__Axis const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Scrollbar__Axis const Vertical;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Scrollbar__Axis, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Scrollbar__Axis, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::<ClickRepeat>d__58
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::Scrollbar::<ClickRepeat>d__58*
class CORDL_TYPE __Scrollbar___ClickRepeat_d__58 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::UI::Scrollbar> __4__this;

  /// @brief Field camera, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera))::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field screenPosition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_screenPosition, put = __cordl_internal_set_screenPosition))::UnityEngine::Vector2 screenPosition;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3514ce0, size 0x274, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3514f54, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3514f5c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3514f9c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3514cdc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

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

  /// @brief Method .ctor, addr 0x351439c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __Scrollbar___ClickRepeat_d__58();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Scrollbar___ClickRepeat_d__58", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Scrollbar___ClickRepeat_d__58(__Scrollbar___ClickRepeat_d__58&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Scrollbar___ClickRepeat_d__58", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Scrollbar___ClickRepeat_d__58(__Scrollbar___ClickRepeat_d__58 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58, ___screenPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58, ___camera) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Scrollbar
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 314, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::Scrollbar*
class CORDL_TYPE Scrollbar : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using Axis = ::UnityEngine::UI::__Scrollbar__Axis;

  using Direction = ::UnityEngine::UI::__Scrollbar__Direction;

  using ScrollEvent = ::UnityEngine::UI::__Scrollbar__ScrollEvent;

  using _ClickRepeat_d__58 = ::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58;

  __declspec(property(get = get_axis))::UnityEngine::UI::__Scrollbar__Axis axis;

  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::UI::__Scrollbar__Direction direction;

  __declspec(property(get = get_handleRect, put = set_handleRect))::UnityW<::UnityEngine::RectTransform> handleRect;

  /// @brief Field isPointerDownAndNotDragging, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get_isPointerDownAndNotDragging, put = __cordl_internal_set_isPointerDownAndNotDragging)) bool isPointerDownAndNotDragging;

  /// @brief Field m_ContainerRect, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContainerRect, put = __cordl_internal_set_m_ContainerRect))::UnityW<::UnityEngine::RectTransform> m_ContainerRect;

  /// @brief Field m_DelayedUpdateVisuals, offset 0x139, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DelayedUpdateVisuals, put = __cordl_internal_set_m_DelayedUpdateVisuals)) bool m_DelayedUpdateVisuals;

  /// @brief Field m_Direction, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Direction, put = __cordl_internal_set_m_Direction))::UnityEngine::UI::__Scrollbar__Direction m_Direction;

  /// @brief Field m_HandleRect, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HandleRect, put = __cordl_internal_set_m_HandleRect))::UnityW<::UnityEngine::RectTransform> m_HandleRect;

  /// @brief Field m_NumberOfSteps, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfSteps, put = __cordl_internal_set_m_NumberOfSteps)) int32_t m_NumberOfSteps;

  /// @brief Field m_Offset, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Offset, put = __cordl_internal_set_m_Offset))::UnityEngine::Vector2 m_Offset;

  /// @brief Field m_OnValueChanged, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged))::UnityEngine::UI::__Scrollbar__ScrollEvent* m_OnValueChanged;

  /// @brief Field m_PointerDownRepeat, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerDownRepeat, put = __cordl_internal_set_m_PointerDownRepeat))::UnityEngine::Coroutine* m_PointerDownRepeat;

  /// @brief Field m_Size, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) float_t m_Size;

  /// @brief Field m_Tracker, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Tracker, put = __cordl_internal_set_m_Tracker))::UnityEngine::DrivenRectTransformTracker m_Tracker;

  /// @brief Field m_Value, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) float_t m_Value;

  __declspec(property(get = get_numberOfSteps, put = set_numberOfSteps)) int32_t numberOfSteps;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged))::UnityEngine::UI::__Scrollbar__ScrollEvent* onValueChanged;

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

  /// @brief Method ClickRepeat, addr 0x351435c, size 0x40, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ClickRepeat(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method ClickRepeat, addr 0x35142d0, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ClickRepeat(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Camera* camera);

  /// @brief Method DoUpdateDrag, addr 0x3513e0c, size 0x64, virtual false, abstract: false, final false
  inline void DoUpdateDrag(::UnityEngine::Vector2 handleCorner, float_t remainingSize);

  /// @brief Method FindSelectableOnDown, addr 0x3514a48, size 0x24, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnDown();

  /// @brief Method FindSelectableOnLeft, addr 0x3514754, size 0x24, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnLeft();

  /// @brief Method FindSelectableOnRight, addr 0x3514850, size 0x24, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnRight();

  /// @brief Method FindSelectableOnUp, addr 0x351494c, size 0x24, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnUp();

  /// @brief Method GraphicUpdateComplete, addr 0x3513714, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method LayoutComplete, addr 0x3513710, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method MayDrag, addr 0x3513e70, size 0x64, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::UnityEngine::UI::Scrollbar* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x3513ed4, size 0x1bc, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDisable, addr 0x35139f0, size 0x20, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrag, addr 0x3514090, size 0x90, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEnable, addr 0x3513718, size 0x30, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnInitializePotentialDrag, addr 0x3514b44, size 0x18, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnMove, addr 0x3514404, size 0x2c4, virtual true, abstract: false, final false
  inline void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x3514120, size 0x80, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x35143c4, size 0x18, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnRectTransformDimensionsChange, addr 0x3513b4c, size 0x38, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method Rebuild, addr 0x351370c, size 0x4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method Set, addr 0x35134ec, size 0xc4, virtual false, abstract: false, final false
  inline void Set(float_t input, bool sendCallback);

  /// @brief Method SetDirection, addr 0x3514b5c, size 0x178, virtual false, abstract: false, final false
  inline void SetDirection(::UnityEngine::UI::__Scrollbar__Direction direction, bool includeRectLayouts);

  /// @brief Method SetValueWithoutNotify, addr 0x35135b0, size 0x8, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(float_t input);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x3514cd4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method Update, addr 0x3513b38, size 0x14, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateCachedReferences, addr 0x3512f10, size 0xe0, virtual false, abstract: false, final false
  inline void UpdateCachedReferences();

  /// @brief Method UpdateDrag, addr 0x3513ba8, size 0x264, virtual false, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method UpdateVisuals, addr 0x3512ff0, size 0x198, virtual false, abstract: false, final false
  inline void UpdateVisuals();

  constexpr bool const& __cordl_internal_get_isPointerDownAndNotDragging() const;

  constexpr bool& __cordl_internal_get_isPointerDownAndNotDragging();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_ContainerRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_ContainerRect();

  constexpr bool const& __cordl_internal_get_m_DelayedUpdateVisuals() const;

  constexpr bool& __cordl_internal_get_m_DelayedUpdateVisuals();

  constexpr ::UnityEngine::UI::__Scrollbar__Direction const& __cordl_internal_get_m_Direction() const;

  constexpr ::UnityEngine::UI::__Scrollbar__Direction& __cordl_internal_get_m_Direction();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_HandleRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_HandleRect();

  constexpr int32_t const& __cordl_internal_get_m_NumberOfSteps() const;

  constexpr int32_t& __cordl_internal_get_m_NumberOfSteps();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Offset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Offset();

  constexpr ::UnityEngine::UI::__Scrollbar__ScrollEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Scrollbar__ScrollEvent*> const& __cordl_internal_get_m_OnValueChanged() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_PointerDownRepeat();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_PointerDownRepeat() const;

  constexpr float_t const& __cordl_internal_get_m_Size() const;

  constexpr float_t& __cordl_internal_get_m_Size();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker();

  constexpr float_t const& __cordl_internal_get_m_Value() const;

  constexpr float_t& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_isPointerDownAndNotDragging(bool value);

  constexpr void __cordl_internal_set_m_ContainerRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_DelayedUpdateVisuals(bool value);

  constexpr void __cordl_internal_set_m_Direction(::UnityEngine::UI::__Scrollbar__Direction value);

  constexpr void __cordl_internal_set_m_HandleRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_NumberOfSteps(int32_t value);

  constexpr void __cordl_internal_set_m_Offset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::__Scrollbar__ScrollEvent* value);

  constexpr void __cordl_internal_set_m_PointerDownRepeat(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_Size(float_t value);

  constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  constexpr void __cordl_internal_set_m_Value(float_t value);

  /// @brief Method .ctor, addr 0x3513204, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_axis, addr 0x3513b84, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Scrollbar__Axis get_axis();

  /// @brief Method get_direction, addr 0x3513188, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Scrollbar__Direction get_direction();

  /// @brief Method get_handleRect, addr 0x3512e8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_handleRect();

  /// @brief Method get_numberOfSteps, addr 0x3513644, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numberOfSteps();

  /// @brief Method get_onValueChanged, addr 0x35136d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Scrollbar__ScrollEvent* get_onValueChanged();

  /// @brief Method get_reverseValue, addr 0x3513b94, size 0x14, virtual false, abstract: false, final false
  inline bool get_reverseValue();

  /// @brief Method get_size, addr 0x35135b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_size();

  /// @brief Method get_stepSize, addr 0x35136e0, size 0x2c, virtual false, abstract: false, final false
  inline float_t get_stepSize();

  /// @brief Method get_value, addr 0x351342c, size 0xb8, virtual false, abstract: false, final false
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

  /// @brief Method set_direction, addr 0x3513190, size 0x74, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UI::__Scrollbar__Direction value);

  /// @brief Method set_handleRect, addr 0x3512e94, size 0x7c, virtual false, abstract: false, final false
  inline void set_handleRect(::UnityEngine::RectTransform* value);

  /// @brief Method set_numberOfSteps, addr 0x351364c, size 0x84, virtual false, abstract: false, final false
  inline void set_numberOfSteps(int32_t value);

  /// @brief Method set_onValueChanged, addr 0x35136d8, size 0x8, virtual false, abstract: false, final false
  inline void set_onValueChanged(::UnityEngine::UI::__Scrollbar__ScrollEvent* value);

  /// @brief Method set_size, addr 0x35135c0, size 0x84, virtual false, abstract: false, final false
  inline void set_size(float_t value);

  /// @brief Method set_value, addr 0x35134e4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field m_HandleRect, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_HandleRect;

  /// @brief Field m_Direction, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::UI::__Scrollbar__Direction ___m_Direction;

  /// @brief Field m_Value, offset: 0x104, size: 0x4, def value: None
  float_t ___m_Value;

  /// @brief Field m_Size, offset: 0x108, size: 0x4, def value: None
  float_t ___m_Size;

  /// @brief Field m_NumberOfSteps, offset: 0x10c, size: 0x4, def value: None
  int32_t ___m_NumberOfSteps;

  /// @brief Field m_OnValueChanged, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UI::__Scrollbar__ScrollEvent* ___m_OnValueChanged;

  /// @brief Field m_ContainerRect, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_ContainerRect;

  /// @brief Field m_Offset, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Offset;

  /// @brief Field m_Tracker, offset: 0x128, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  /// @brief Field m_PointerDownRepeat, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_PointerDownRepeat;

  /// @brief Field isPointerDownAndNotDragging, offset: 0x138, size: 0x1, def value: None
  bool ___isPointerDownAndNotDragging;

  /// @brief Field m_DelayedUpdateVisuals, offset: 0x139, size: 0x1, def value: None
  bool ___m_DelayedUpdateVisuals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Scrollbar, 0x140>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_HandleRect) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Direction) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Value) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Size) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_NumberOfSteps) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_OnValueChanged) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_ContainerRect) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Offset) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_Tracker) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_PointerDownRepeat) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___isPointerDownAndNotDragging) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Scrollbar, ___m_DelayedUpdateVisuals) == 0x139, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Scrollbar__Axis, "UnityEngine.UI", "Scrollbar/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Scrollbar__Direction, "UnityEngine.UI", "Scrollbar/Direction");
NEED_NO_BOX(::UnityEngine::UI::Scrollbar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Scrollbar*, "UnityEngine.UI", "Scrollbar");
NEED_NO_BOX(::UnityEngine::UI::__Scrollbar__ScrollEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Scrollbar__ScrollEvent*, "UnityEngine.UI", "Scrollbar/ScrollEvent");
NEED_NO_BOX(::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Scrollbar___ClickRepeat_d__58*, "UnityEngine.UI", "Scrollbar/<ClickRepeat>d__58");
