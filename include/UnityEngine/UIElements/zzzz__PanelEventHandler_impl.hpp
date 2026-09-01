#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PanelEventHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__PenStatus_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelEventHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelEventHandler_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEventType::PanelEventHandler_PointerEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEventType::PanelEventHandler_PointerEventType() {}
constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEventType UnityEngine::UIElements::PanelEventHandler_PointerEventType::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEventType UnityEngine::UIElements::PanelEventHandler_PointerEventType::Down{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEventType UnityEngine::UIElements::PanelEventHandler_PointerEventType::Up{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_pointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e172e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_pointerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_pointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(int32_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e172ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_pointerId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_pointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e172f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_pointerType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_pointerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::StringW)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e172fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_pointerType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_isPrimary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_isPrimary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_isPrimary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_isPrimary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(bool)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_isPrimary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1730c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_isPrimary", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_button", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(int32_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1731c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_button", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_pressedButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_pressedButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_pressedButtons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_pressedButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(int32_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_pressedButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1732c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_pressedButtons", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e17334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e17340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_localPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e1734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_localPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_localPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e17358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_localPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_deltaPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_deltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e17364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_deltaPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_deltaPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_deltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e17370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_deltaPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_deltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1737c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_deltaTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_deltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_deltaTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_clickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1738c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_clickCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_clickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(int32_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_clickCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1739c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_pressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_pressure", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_tangentialPressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_tangentialPressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_tangentialPressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_tangentialPressure", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_altitudeAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_altitudeAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_altitudeAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_altitudeAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_azimuthAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_azimuthAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_azimuthAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_azimuthAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_twist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_twist", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_tilt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_tilt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_tilt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_tilt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_tilt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_tilt", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_penStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PenStatus (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_penStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e173fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_penStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_penStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::PenStatus)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_penStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_penStatus", {}, { ::i2c::type_of<::UnityEngine::PenStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1740c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_radius", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_radiusVariance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1741c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_radiusVariance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_radiusVariance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_radiusVariance", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_modifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventModifiers (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1742c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_modifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.set_modifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e17434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_modifiers", {}, { ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_shiftKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_shiftKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e1743c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_shiftKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_ctrlKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_ctrlKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e17448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_ctrlKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_commandKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_commandKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e17454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_commandKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_altKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(&::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_altKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e17460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_altKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.get_actionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_actionKey)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e1746c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_actionKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(
    ::UnityEngine::UIElements::PanelEventHandler*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::UIElements::PanelEventHandler_PointerEventType)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::Read)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x6e16d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(),
                                                             { "Read",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::PanelEventHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::PanelEventHandler_PointerEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent.SetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::PanelEventHandler_PointerEvent::SetPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e17214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(),
                                                             { "SetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler_PointerEvent::*)()>(&::UnityEngine::UIElements::PanelEventHandler_PointerEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e172dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler_PointerEvent._Read_g__InRange_90_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::UnityEngine::UIElements::PanelEventHandler_PointerEvent::_Read_g__InRange_90_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e17530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(),
                                                             { "<Read>g__InRange|90_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__pointerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__pointerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__pointerId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerId_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__pointerType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerType_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__pointerType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerType_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__pointerType_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerType_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__isPrimary_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPrimary_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__isPrimary_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPrimary_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__isPrimary_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPrimary_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__button_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__button_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__button_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__pressedButtons_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedButtons_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__pressedButtons_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedButtons_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__pressedButtons_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedButtons_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__position_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__position_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__position_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__localPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__localPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__localPosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__deltaPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__deltaPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaPosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__deltaPosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deltaPosition_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__deltaTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaTime_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__deltaTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaTime_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__deltaTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deltaTime_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__clickCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__clickCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__clickCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clickCount_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__pressure_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressure_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__pressure_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressure_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__pressure_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressure_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__tangentialPressure_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tangentialPressure_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__tangentialPressure_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tangentialPressure_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__tangentialPressure_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tangentialPressure_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__altitudeAngle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____altitudeAngle_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__altitudeAngle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____altitudeAngle_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__altitudeAngle_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____altitudeAngle_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__azimuthAngle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____azimuthAngle_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__azimuthAngle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____azimuthAngle_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__azimuthAngle_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____azimuthAngle_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__twist_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____twist_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__twist_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____twist_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__twist_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____twist_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__tilt_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tilt_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__tilt_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tilt_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__tilt_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tilt_k__BackingField = value;
}
constexpr ::UnityEngine::PenStatus& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__penStatus_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____penStatus_k__BackingField;
}
constexpr ::UnityEngine::PenStatus const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__penStatus_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____penStatus_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__penStatus_k__BackingField(::UnityEngine::PenStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____penStatus_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__radius_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__radius_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__radius_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__radiusVariance_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radiusVariance_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__radiusVariance_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radiusVariance_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__radiusVariance_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radiusVariance_k__BackingField = value;
}
constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__modifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_get__modifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
constexpr void UnityEngine::UIElements::PanelEventHandler_PointerEvent::__cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiers_k__BackingField = value;
}
inline int32_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_pointerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_pointerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_pointerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_pointerId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_pointerType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_pointerType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_pointerType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_pointerType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_isPrimary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_isPrimary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_isPrimary(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_isPrimary", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_button(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_button", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_pressedButtons() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_pressedButtons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_pressedButtons(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_pressedButtons", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_localPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_localPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_localPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_localPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_deltaPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_deltaPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_deltaPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_deltaPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_deltaTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_deltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_deltaTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_deltaTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_clickCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_clickCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_clickCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_clickCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_pressure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_pressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_pressure(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_pressure", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_tangentialPressure() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_tangentialPressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_tangentialPressure(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_tangentialPressure", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_altitudeAngle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_altitudeAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_altitudeAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_altitudeAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_azimuthAngle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_azimuthAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_azimuthAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_azimuthAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_twist() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_twist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_twist(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_twist", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_tilt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_tilt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_tilt(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_tilt", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::PenStatus UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_penStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_penStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenStatus>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_penStatus(::UnityEngine::PenStatus value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_penStatus", {}, { ::i2c::type_of<::UnityEngine::PenStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_radius(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_radius", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_radiusVariance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_radiusVariance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_radiusVariance(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_radiusVariance", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_modifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_modifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::set_modifiers(::UnityEngine::EventModifiers value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "set_modifiers", {}, { ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_shiftKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_shiftKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_ctrlKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_ctrlKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_commandKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_commandKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_altKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_altKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelEventHandler_PointerEvent::get_actionKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { "get_actionKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::Read(::UnityEngine::UIElements::PanelEventHandler* self, ::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                          ::UnityEngine::UIElements::PanelEventHandler_PointerEventType eventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(),
                                                           { "Read",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::PanelEventHandler*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::PanelEventHandler_PointerEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, self, eventData, eventType);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::SetPosition(::UnityEngine::Vector3 positionOverride, ::UnityEngine::Vector3 deltaOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(),
                                                           { "SetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positionOverride, deltaOverride);
}
inline void UnityEngine::UIElements::PanelEventHandler_PointerEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelEventHandler_PointerEvent::_Read_g__InRange_90_0(int32_t i, int32_t start, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(),
                                                           { "<Read>g__InRange|90_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i, start, count);
}
inline ::UnityEngine::UIElements::PanelEventHandler_PointerEvent* UnityEngine::UIElements::PanelEventHandler_PointerEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IPointerEvent"
constexpr UnityEngine::UIElements::PanelEventHandler_PointerEvent::operator ::UnityEngine::UIElements::IPointerEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::IPointerEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IPointerEvent"
constexpr ::UnityEngine::UIElements::IPointerEvent* UnityEngine::UIElements::PanelEventHandler_PointerEvent::i___UnityEngine__UIElements__IPointerEvent() noexcept {
  return static_cast<::UnityEngine::UIElements::IPointerEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEvent::PanelEventHandler_PointerEvent() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IPanel* (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e14a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_panel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.set_panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PanelEventHandler::set_panel)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e14a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "set_panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_selectableGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::get_selectableGameObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e14f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_selectableGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_eventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::EventSystem> (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::get_eventSystem)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6e14f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_eventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_isCurrentFocusedPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::get_isCurrentFocusedPanel)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e1505c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_isCurrentFocusedPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_currentFocusedElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::get_currentFocusedElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e15128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_currentFocusedElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e15160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e15168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.RegisterCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::RegisterCallbacks)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6e14d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "RegisterCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.UnregisterCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::UnregisterCallbacks)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6e14b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "UnregisterCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPanelDestroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e15170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnPanelDestroyed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnElementFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::FocusEvent*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnElementFocus)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e15178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnElementFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnElementBlur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::BlurEvent*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnElementBlur)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e15264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnElementBlur", {}, { ::i2c::type_of<::UnityEngine::UIElements::BlurEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnSelect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnSelect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e15268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnSelect", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnDeselect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnDeselect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e15280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnDeselect", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerMove)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6e152b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                           { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerUp)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6e155d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                           { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerDown)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6e157c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                           { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerExit)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6e15a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                           { "OnPointerExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerEnter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e15d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                           { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerClick)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e15d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                           { "OnPointerClick", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnSubmit)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6e15d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnSubmit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnCancel)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6e160b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnCancel", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::AxisEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnMove)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6e16278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnMove", {}, { ::i2c::type_of<::UnityEngine::EventSystems::AxisEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnScroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnScroll)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6e1646c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnScroll", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e15578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                { "SendEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::PanelEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e16644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                             { "SendEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e16660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e166bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessImguiEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::PanelEventHandler::ProcessImguiEvents)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e15f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "ProcessImguiEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessKeyboardEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*, ::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::PanelEventHandler::ProcessKeyboardEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e166c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                             { "ProcessKeyboardEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessTabEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*, ::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::PanelEventHandler::ProcessTabEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e16744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                             { "ProcessTabEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendTabEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(
    ::UnityEngine::Event*, ::UnityEngine::UIElements::NavigationMoveEvent_Direction, ::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::PanelEventHandler::SendTabEvent)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6e16b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                             { "SendTabEvent",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent_Direction>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendKeyUpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*, ::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::PanelEventHandler::SendKeyUpEvent)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6e167a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                             { "SendKeyUpEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendKeyDownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*, ::UnityEngine::UIElements::Focusable*)>(
    &::UnityEngine::UIElements::PanelEventHandler::SendKeyDownEvent)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6e16984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                             { "SendKeyDownEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ReadPointerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler::*)(
    ::UnityEngine::UIElements::PanelEventHandler_PointerEvent*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::UIElements::PanelEventHandler_PointerEventType)>(
    &::UnityEngine::UIElements::PanelEventHandler::ReadPointerData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6e15418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                { "ReadPointerData",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::PanelEventHandler_PointerEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e1722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel* const& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Panel = value;
}
constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEvent*& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_PointerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerEvent;
}
constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEvent* const& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_PointerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerEvent;
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__cordl_internal_set_m_PointerEvent(::UnityEngine::UIElements::PanelEventHandler_PointerEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerEvent = value;
}
constexpr float_t& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_LastClickTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastClickTime;
}
constexpr float_t const& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_LastClickTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastClickTime;
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__cordl_internal_set_m_LastClickTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastClickTime = value;
}
constexpr bool& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Selecting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Selecting;
}
constexpr bool const& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Selecting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Selecting;
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__cordl_internal_set_m_Selecting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Selecting = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr ::UnityEngine::Event* const& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__cordl_internal_set_m_Event(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Event = value;
}
inline void UnityEngine::UIElements::PanelEventHandler::setStaticF_s_Modifiers(::UnityEngine::EventModifiers value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventModifiers, "s_Modifiers", ::UnityEngine::UIElements::PanelEventHandler*>(std::forward<::UnityEngine::EventModifiers>(value));
}
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::PanelEventHandler::getStaticF_s_Modifiers() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventModifiers, "s_Modifiers", ::UnityEngine::UIElements::PanelEventHandler*>();
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelEventHandler::get_panel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_panel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::set_panel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "set_panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UIElements::PanelEventHandler::get_selectableGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_selectableGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::EventSystems::EventSystem> UnityEngine::UIElements::PanelEventHandler::get_eventSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_eventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::EventSystem>>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PanelEventHandler::get_isCurrentFocusedPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_isCurrentFocusedPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::PanelEventHandler::get_currentFocusedElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "get_currentFocusedElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::RegisterCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "RegisterCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::UnregisterCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "UnregisterCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPanelDestroyed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnPanelDestroyed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnElementFocus(::UnityEngine::UIElements::FocusEvent* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnElementFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnElementBlur(::UnityEngine::UIElements::BlurEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnElementBlur", {}, { ::i2c::type_of<::UnityEngine::UIElements::BlurEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnSelect", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnDeselect", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                         { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                         { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                         { "OnPointerExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                         { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                                                         { "OnPointerClick", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnSubmit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnCancel", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnMove(::UnityEngine::EventSystems::AxisEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnMove", {}, { ::i2c::type_of<::UnityEngine::EventSystems::AxisEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "OnScroll", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::EventSystems::BaseEventData* sourceEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                              { "SendEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, sourceEventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::Event* sourceEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                           { "SendEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, sourceEvent);
}
inline void UnityEngine::UIElements::PanelEventHandler::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessImguiEvents(::UnityEngine::UIElements::Focusable* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { "ProcessImguiEvents", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessKeyboardEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::Focusable* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                           { "ProcessKeyboardEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, target);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessTabEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::Focusable* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                           { "ProcessTabEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, target);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendTabEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::NavigationMoveEvent_Direction direction,
                                                                     ::UnityEngine::UIElements::Focusable* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                           { "SendTabEvent",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::NavigationMoveEvent_Direction>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, direction, target);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendKeyUpEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::Focusable* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                           { "SendKeyUpEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, target);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendKeyDownEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::Focusable* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                                           { "SendKeyDownEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, target);
}
inline bool UnityEngine::UIElements::PanelEventHandler::ReadPointerData(::UnityEngine::UIElements::PanelEventHandler_PointerEvent* pe, ::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                        ::UnityEngine::UIElements::PanelEventHandler_PointerEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(),
                                              { "ReadPointerData",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::PanelEventHandler_PointerEvent*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::PanelEventHandler_PointerEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pe, eventData, eventType);
}
inline void UnityEngine::UIElements::PanelEventHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelEventHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PanelEventHandler* UnityEngine::UIElements::PanelEventHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PanelEventHandler*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerMoveHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerMoveHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerMoveHandler"
constexpr ::UnityEngine::EventSystems::IPointerMoveHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IPointerMoveHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__ISubmitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
constexpr ::UnityEngine::EventSystems::ICancelHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__ICancelHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IMoveHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
constexpr ::UnityEngine::EventSystems::IMoveHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IMoveHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
constexpr ::UnityEngine::EventSystems::IScrollHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IScrollHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__ISelectHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDeselectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr ::UnityEngine::EventSystems::IDeselectHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IDeselectHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDeselectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IRuntimePanelComponent"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::UIElements::IRuntimePanelComponent*() noexcept {
  return static_cast<::UnityEngine::UIElements::IRuntimePanelComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IRuntimePanelComponent"
constexpr ::UnityEngine::UIElements::IRuntimePanelComponent* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__UIElements__IRuntimePanelComponent() noexcept {
  return static_cast<::UnityEngine::UIElements::IRuntimePanelComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* UnityEngine::UIElements::PanelEventHandler::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelEventHandler::PanelEventHandler() {}
