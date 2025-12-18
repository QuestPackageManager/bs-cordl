#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEvent)
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
class IEventProperties;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_Button;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_ButtonsState;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_Type;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct PointerEvent_Button;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_Type;
}
namespace UnityEngine::InputForUI {
struct PointerEvent;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_ButtonsState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::PointerEvent_Button);
MARK_VAL_T(::UnityEngine::InputForUI::PointerEvent_Type);
MARK_VAL_T(::UnityEngine::InputForUI::PointerEvent);
MARK_VAL_T(::UnityEngine::InputForUI::PointerEvent_ButtonsState);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerEvent/Type
struct CORDL_TYPE PointerEvent_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PointerEvent_Type_Unwrapped
  enum struct __PointerEvent_Type_Unwrapped : int32_t {
    __E_PointerMoved = static_cast<int32_t>(0x1),
    __E_Scroll = static_cast<int32_t>(0x2),
    __E_ButtonPressed = static_cast<int32_t>(0x3),
    __E_ButtonReleased = static_cast<int32_t>(0x4),
    __E_State = static_cast<int32_t>(0x5),
    __E_TouchCanceled = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PointerEvent_Type_Unwrapped() const noexcept {
    return static_cast<__PointerEvent_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEvent_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PointerEvent_Type(int32_t value__) noexcept;

  /// @brief Field ButtonPressed value: I32(3)
  static ::UnityEngine::InputForUI::PointerEvent_Type const ButtonPressed;

  /// @brief Field ButtonReleased value: I32(4)
  static ::UnityEngine::InputForUI::PointerEvent_Type const ButtonReleased;

  /// @brief Field PointerMoved value: I32(1)
  static ::UnityEngine::InputForUI::PointerEvent_Type const PointerMoved;

  /// @brief Field Scroll value: I32(2)
  static ::UnityEngine::InputForUI::PointerEvent_Type const Scroll;

  /// @brief Field State value: I32(5)
  static ::UnityEngine::InputForUI::PointerEvent_Type const State;

  /// @brief Field TouchCanceled value: I32(6)
  static ::UnityEngine::InputForUI::PointerEvent_Type const TouchCanceled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21625 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::PointerEvent_Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerEvent/Button
struct CORDL_TYPE PointerEvent_Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __PointerEvent_Button_Unwrapped
  enum struct __PointerEvent_Button_Unwrapped : uint32_t {
    __E_None = static_cast<uint32_t>(0x0u),
    __E_Primary = static_cast<uint32_t>(0x1u),
    __E_FingerInTouch = static_cast<uint32_t>(0x1u),
    __E_PenTipInTouch = static_cast<uint32_t>(0x1u),
    __E_PenEraserInTouch = static_cast<uint32_t>(0x2u),
    __E_PenBarrelButton = static_cast<uint32_t>(0x4u),
    __E_MouseLeft = static_cast<uint32_t>(0x1u),
    __E_MouseRight = static_cast<uint32_t>(0x2u),
    __E_MouseMiddle = static_cast<uint32_t>(0x4u),
    __E_MouseForward = static_cast<uint32_t>(0x8u),
    __E_MouseBack = static_cast<uint32_t>(0x10u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PointerEvent_Button_Unwrapped() const noexcept {
    return static_cast<__PointerEvent_Button_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEvent_Button();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PointerEvent_Button(uint32_t value__) noexcept;

  /// @brief Field FingerInTouch value: U32(1)
  static ::UnityEngine::InputForUI::PointerEvent_Button const FingerInTouch;

  /// @brief Field MouseBack value: U32(16)
  static ::UnityEngine::InputForUI::PointerEvent_Button const MouseBack;

  /// @brief Field MouseForward value: U32(8)
  static ::UnityEngine::InputForUI::PointerEvent_Button const MouseForward;

  /// @brief Field MouseLeft value: U32(1)
  static ::UnityEngine::InputForUI::PointerEvent_Button const MouseLeft;

  /// @brief Field MouseMiddle value: U32(4)
  static ::UnityEngine::InputForUI::PointerEvent_Button const MouseMiddle;

  /// @brief Field MouseRight value: U32(2)
  static ::UnityEngine::InputForUI::PointerEvent_Button const MouseRight;

  /// @brief Field None value: U32(0)
  static ::UnityEngine::InputForUI::PointerEvent_Button const None;

  /// @brief Field PenBarrelButton value: U32(4)
  static ::UnityEngine::InputForUI::PointerEvent_Button const PenBarrelButton;

  /// @brief Field PenEraserInTouch value: U32(2)
  static ::UnityEngine::InputForUI::PointerEvent_Button const PenEraserInTouch;

  /// @brief Field PenTipInTouch value: U32(1)
  static ::UnityEngine::InputForUI::PointerEvent_Button const PenTipInTouch;

  /// @brief Field Primary value: U32(1)
  static ::UnityEngine::InputForUI::PointerEvent_Button const Primary;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21626 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent_Button, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::PointerEvent_Button, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerEvent/ButtonsState
struct CORDL_TYPE PointerEvent_ButtonsState {
public:
  // Declarations
  /// @brief Method Get, addr 0x698f848, size 0x10, virtual false, abstract: false, final false
  inline bool Get(::UnityEngine::InputForUI::PointerEvent_Button button);

  /// @brief Method Reset, addr 0x698f858, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Set, addr 0x698f82c, size 0x1c, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::InputForUI::PointerEvent_Button button, bool pressed);

  /// @brief Method ToString, addr 0x698f860, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEvent_ButtonsState();

  // Ctor Parameters [CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PointerEvent_ButtonsState(uint32_t _state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21627 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field _state, offset: 0x0, size: 0x4, def value: None
  uint32_t _state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent_ButtonsState, _state) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::PointerEvent_ButtonsState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.EventSource, UnityEngine.InputForUI.PointerEvent::Button,
// UnityEngine.InputForUI.PointerEvent::ButtonsState, UnityEngine.InputForUI.PointerEvent::Type, UnityEngine.Vector2
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerEvent
struct CORDL_TYPE PointerEvent {
public:
  // Declarations
  using Button = ::UnityEngine::InputForUI::PointerEvent_Button;

  using ButtonsState = ::UnityEngine::InputForUI::PointerEvent_ButtonsState;

  using Type = ::UnityEngine::InputForUI::PointerEvent_Type;

  __declspec(property(get = get_altitude)) float_t altitude;

  __declspec(property(get = get_azimuth)) float_t azimuth;

  __declspec(property(get = get_eventModifiers, put = set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers eventModifiers;

  __declspec(property(get = get_eventSource, put = set_eventSource)) ::UnityEngine::InputForUI::EventSource eventSource;

  __declspec(property(get = get_isPrimaryPointer)) bool isPrimaryPointer;

  __declspec(property(put = set_playerId)) uint32_t playerId;

  __declspec(property(get = get_timestamp, put = set_timestamp)) ::Unity::IntegerTime::DiscreteTime timestamp;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
  constexpr operator ::UnityEngine::InputForUI::IEventProperties*();

  /// @brief Method ButtonFromButtonIndex, addr 0x698f818, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::PointerEvent_Button ButtonFromButtonIndex(int32_t index);

  /// @brief Method ToString, addr 0x698ed14, size 0xb04, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_altitude, addr 0x698ec64, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_altitude();

  /// @brief Method get_azimuth, addr 0x698ebb4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_azimuth();

  /// @brief Method get_eventModifiers, addr 0x698ed04, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers();

  /// @brief Method get_eventSource, addr 0x698ecec, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventSource get_eventSource();

  /// @brief Method get_isPrimaryPointer, addr 0x698eba4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPrimaryPointer();

  /// @brief Method get_timestamp, addr 0x698ecdc, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::IntegerTime::DiscreteTime get_timestamp();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
  constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties();

  /// @brief Method set_eventModifiers, addr 0x698ed0c, size 0x8, virtual false, abstract: false, final false
  inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value);

  /// @brief Method set_eventSource, addr 0x698ecf4, size 0x8, virtual false, abstract: false, final false
  inline void set_eventSource(::UnityEngine::InputForUI::EventSource value);

  /// @brief Method set_playerId, addr 0x698ecfc, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(uint32_t value);

  /// @brief Method set_timestamp, addr 0x698ece4, size 0x8, virtual false, abstract: false, final false
  inline void set_timestamp(::Unity::IntegerTime::DiscreteTime value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEvent();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputForUI::PointerEvent_Type", modifiers: "", def_value: None }, CppParam { name: "pointerIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "deltaPosition", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "tilt", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pressure",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isInverted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "button", ty:
  // "::UnityEngine::InputForUI::PointerEvent_Button", modifiers: "", def_value: None }, CppParam { name: "buttonsState", ty: "::UnityEngine::InputForUI::PointerEvent_ButtonsState", modifiers: "",
  // def_value: None }, CppParam { name: "clickCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime",
  // modifiers: "", def_value: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: None }, CppParam { name:
  // "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "",
  // def_value: None }]
  constexpr PointerEvent(::UnityEngine::InputForUI::PointerEvent_Type type, int32_t pointerIndex, ::UnityEngine::Vector2 position, ::UnityEngine::Vector2 deltaPosition, ::UnityEngine::Vector2 scroll,
                         int32_t displayIndex, ::UnityEngine::Vector2 tilt, float_t twist, float_t pressure, bool isInverted, ::UnityEngine::InputForUI::PointerEvent_Button button,
                         ::UnityEngine::InputForUI::PointerEvent_ButtonsState buttonsState, int32_t clickCount, ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField,
                         ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField, uint32_t _playerId_k__BackingField,
                         ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21628 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputForUI::PointerEvent_Type type;

  /// @brief Field pointerIndex, offset: 0x4, size: 0x4, def value: None
  int32_t pointerIndex;

  /// @brief Field position, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 position;

  /// @brief Field deltaPosition, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 deltaPosition;

  /// @brief Field scroll, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 scroll;

  /// @brief Field displayIndex, offset: 0x20, size: 0x4, def value: None
  int32_t displayIndex;

  /// @brief Field tilt, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::Vector2 tilt;

  /// @brief Field twist, offset: 0x2c, size: 0x4, def value: None
  float_t twist;

  /// @brief Field pressure, offset: 0x30, size: 0x4, def value: None
  float_t pressure;

  /// @brief Field isInverted, offset: 0x34, size: 0x1, def value: None
  bool isInverted;

  /// @brief Field button, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::InputForUI::PointerEvent_Button button;

  /// @brief Field buttonsState, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::InputForUI::PointerEvent_ButtonsState buttonsState;

  /// @brief Field clickCount, offset: 0x40, size: 0x4, def value: None
  int32_t clickCount;

  /// @brief Field <timestamp>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField;

  /// @brief Field <eventSource>k__BackingField, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField;

  /// @brief Field <playerId>k__BackingField, offset: 0x54, size: 0x4, def value: None
  uint32_t _playerId_k__BackingField;

  /// @brief Field <eventModifiers>k__BackingField, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, pointerIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, deltaPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, scroll) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, displayIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, tilt) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, twist) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, pressure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, isInverted) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, button) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, buttonsState) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, clickCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, _timestamp_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, _eventSource_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, _playerId_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, _eventModifiers_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::PointerEvent, 0x60>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::PointerEvent_Button, "UnityEngine.InputForUI", "PointerEvent/Button");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::PointerEvent_Type, "UnityEngine.InputForUI", "PointerEvent/Type");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::PointerEvent, "UnityEngine.InputForUI", "PointerEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::PointerEvent_ButtonsState, "UnityEngine.InputForUI", "PointerEvent/ButtonsState");
