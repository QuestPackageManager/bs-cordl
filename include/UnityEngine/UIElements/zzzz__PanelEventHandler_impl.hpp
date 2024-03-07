#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
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
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelEventHandler_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType::__PanelEventHandler__PointerEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType::__PanelEventHandler__PointerEventType() {}
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType UnityEngine::UIElements::__PanelEventHandler__PointerEventType::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType UnityEngine::UIElements::__PanelEventHandler__PointerEventType::Down{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType UnityEngine::UIElements::__PanelEventHandler__PointerEventType::Up{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_pointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efad98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_pointerId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_pointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(int32_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efada0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_pointerId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_pointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efada8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_pointerType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_pointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::StringW)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efadb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_pointerType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_isPrimary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_isPrimary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efadb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_isPrimary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_isPrimary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(bool)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_isPrimary)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efadc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_isPrimary",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_button
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efadcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_button",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_button
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(int32_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efadd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_button",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_pressedButtons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pressedButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efaddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_pressedButtons",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_pressedButtons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(int32_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pressedButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efade4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_pressedButtons",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efadec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_position",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efadf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_position", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_localPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efae04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_localPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_localPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efae10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_localPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_deltaPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_deltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efae1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_deltaPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_deltaPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_deltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efae28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_deltaPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_deltaTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_deltaTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_deltaTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_deltaTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_clickCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_clickCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_clickCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(int32_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_clickCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_pressure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_pressure",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_pressure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_pressure",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_tangentialPressure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_tangentialPressure",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_tangentialPressure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_tangentialPressure",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_altitudeAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_altitudeAngle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_altitudeAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_altitudeAngle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_azimuthAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_azimuthAngle",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_azimuthAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_azimuthAngle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_twist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_twist",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_twist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efae9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_twist",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_radius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efaea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_radius",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_radius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efaeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_radius", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_radiusVariance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efaeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_radiusVariance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_radiusVariance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efaebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_radiusVariance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_modifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventModifiers (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efaec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_modifiers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_modifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efaecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_modifiers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_shiftKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_shiftKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efaed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_shiftKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_ctrlKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_ctrlKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efaee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_ctrlKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_commandKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_commandKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efaeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_commandKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_altKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_altKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2efaef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_altKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_actionKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_actionKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2efaf04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_actionKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(
    ::UnityEngine::UIElements::PanelEventHandler*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::Read)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x2efa848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.SetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::SetPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2efacd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "SetPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efad88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent._Read_g__InRange_82_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::_Read_g__InRange_82_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2efaf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "<Read>g__InRange|82_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IPointerEvent"
constexpr UnityEngine::UIElements::__PanelEventHandler__PointerEvent::operator ::UnityEngine::UIElements::IPointerEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::IPointerEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IPointerEvent"
constexpr ::UnityEngine::UIElements::IPointerEvent* UnityEngine::UIElements::__PanelEventHandler__PointerEvent::i___UnityEngine__UIElements__IPointerEvent() noexcept {
  return static_cast<::UnityEngine::UIElements::IPointerEvent*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__pointerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__pointerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__pointerId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerId_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__pointerType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerType_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__pointerType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerType_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__pointerType_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__isPrimary_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPrimary_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__isPrimary_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPrimary_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__isPrimary_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPrimary_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__button_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__button_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__button_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__pressedButtons_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedButtons_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__pressedButtons_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedButtons_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__pressedButtons_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedButtons_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__position_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__position_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__position_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__localPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__localPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__localPosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__deltaPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__deltaPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaPosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__deltaPosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deltaPosition_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__deltaTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaTime_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__deltaTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deltaTime_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__deltaTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deltaTime_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__clickCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__clickCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__clickCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clickCount_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__pressure_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressure_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__pressure_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressure_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__pressure_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressure_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__tangentialPressure_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tangentialPressure_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__tangentialPressure_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tangentialPressure_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__tangentialPressure_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tangentialPressure_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__altitudeAngle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____altitudeAngle_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__altitudeAngle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____altitudeAngle_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__altitudeAngle_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____altitudeAngle_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__azimuthAngle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____azimuthAngle_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__azimuthAngle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____azimuthAngle_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__azimuthAngle_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____azimuthAngle_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__twist_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____twist_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__twist_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____twist_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__twist_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____twist_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__radius_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__radius_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__radius_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__radiusVariance_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radiusVariance_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__radiusVariance_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radiusVariance_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__radiusVariance_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radiusVariance_k__BackingField = value;
}
constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__modifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_get__modifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiers_k__BackingField = value;
}
inline int32_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pointerId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_pointerId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pointerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_pointerId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pointerType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_pointerType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pointerType(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_pointerType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_isPrimary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_isPrimary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_isPrimary(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_isPrimary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_button() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_button",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_button(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_button",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pressedButtons() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_pressedButtons",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pressedButtons(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_pressedButtons",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_position() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_position",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_position", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_localPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_localPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_localPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_localPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_deltaPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_deltaPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_deltaPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_deltaPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_deltaTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_deltaTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_deltaTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_deltaTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_clickCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_clickCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_clickCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_clickCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pressure() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_pressure",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pressure(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_pressure",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_tangentialPressure() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_tangentialPressure",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_tangentialPressure(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_tangentialPressure",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_altitudeAngle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_altitudeAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_altitudeAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_altitudeAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_azimuthAngle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_azimuthAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_azimuthAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_azimuthAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_twist() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_twist",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_twist(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_twist",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_radius() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_radius",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_radius(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_radius", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_radiusVariance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_radiusVariance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_radiusVariance(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_radiusVariance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_modifiers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_modifiers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_modifiers(::UnityEngine::EventModifiers value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "set_modifiers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_shiftKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_shiftKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_ctrlKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_ctrlKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_commandKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_commandKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_altKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_altKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_actionKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "get_actionKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::Read(::UnityEngine::UIElements::PanelEventHandler* self, ::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                             ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self, eventData, eventType);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::SetPosition(::UnityEngine::Vector3 positionOverride, ::UnityEngine::Vector3 deltaOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "SetPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positionOverride, deltaOverride);
}
inline ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent* UnityEngine::UIElements::__PanelEventHandler__PointerEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>());
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::_Read_g__InRange_82_0(int32_t i, int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), "<Read>g__InRange|82_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, i, start, count);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__PanelEventHandler__PointerEvent() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel* (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef8750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                               "get_panel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.set_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PanelEventHandler::set_panel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2ef8758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "set_panel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_selectableGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::get_selectableGameObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ef8b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                               "get_selectableGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_eventSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::EventSystems::EventSystem> (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::get_eventSystem)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2ef8b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                               "get_eventSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ef8c68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ef8c70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.RegisterCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::RegisterCallbacks)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ef89bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                               "RegisterCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.UnregisterCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::UnregisterCallbacks)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ef87fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                               "UnregisterCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPanelDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef8c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                               "OnPanelDestroyed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnElementFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::FocusEvent*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnElementFocus)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2ef8c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnElementFocus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnElementBlur
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::BlurEvent*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnElementBlur)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ef8d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnElementBlur", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BlurEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnSelect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ef8d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnSelect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnDeselect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ef8de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnDeselect", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerMove)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2ef8df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerUp)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2ef9148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerDown)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2ef9368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerExit)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2ef95f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerExit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnPointerEnter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ef98a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerEnter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnSubmit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnSubmit)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2ef98f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnSubmit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnCancel)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2ef9ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnCancel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::AxisEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnMove)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2ef9c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnMove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnScroll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UIElements::PanelEventHandler::OnScroll)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ef9df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnScroll", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ef90e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "SendEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::PanelEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ef9fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "SendEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2efa014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(
    &::UnityEngine::UIElements::PanelEventHandler::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2efa23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessImguiEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(bool)>(
    &::UnityEngine::UIElements::PanelEventHandler::ProcessImguiEvents)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2efa0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "ProcessImguiEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessKeyboardEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::PanelEventHandler::ProcessKeyboardEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2efa244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "ProcessKeyboardEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessTabEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::PanelEventHandler::ProcessTabEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2efa2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "ProcessTabEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendTabEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*, int32_t)>(
    &::UnityEngine::UIElements::PanelEventHandler::SendTabEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2efa6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                               "SendTabEvent", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendKeyUpEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::PanelEventHandler::SendKeyUpEvent)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2efa338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "SendKeyUpEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendKeyDownEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::PanelEventHandler::SendKeyDownEvent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2efa4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "SendKeyDownEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ReadPointerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler::*)(
    ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType)>(
    &::UnityEngine::UIElements::PanelEventHandler::ReadPointerData)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2ef8fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "ReadPointerData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2efacf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
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
constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_PointerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerEvent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*> const&
UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_PointerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerEvent;
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__cordl_internal_set_m_PointerEvent(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PointerEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& UnityEngine::UIElements::PanelEventHandler::__cordl_internal_get_m_Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Event;
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__cordl_internal_set_m_Event(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::PanelEventHandler::setStaticF_s_Modifiers(::UnityEngine::EventModifiers value) {
  ::cordl_internals::setStaticField<::UnityEngine::EventModifiers, "s_Modifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get>(
      std::forward<::UnityEngine::EventModifiers>(value));
}
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::PanelEventHandler::getStaticF_s_Modifiers() {
  return ::cordl_internals::getStaticField<::UnityEngine::EventModifiers, "s_Modifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get>();
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelEventHandler::get_panel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "get_panel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::set_panel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "set_panel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UIElements::PanelEventHandler::get_selectableGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                             "get_selectableGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::EventSystems::EventSystem> UnityEngine::UIElements::PanelEventHandler::get_eventSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                             "get_eventSystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::EventSystem>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::RegisterCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                             "RegisterCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::UnregisterCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                             "UnregisterCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPanelDestroyed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                             "OnPanelDestroyed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnElementFocus(::UnityEngine::UIElements::FocusEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnElementFocus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnElementBlur(::UnityEngine::UIElements::BlurEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnElementBlur", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BlurEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnSelect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnDeselect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerUp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerExit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnPointerEnter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnSubmit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnCancel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnMove(::UnityEngine::EventSystems::AxisEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnMove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "OnScroll", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::EventSystems::BaseEventData* sourceEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "SendEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, sourceEventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::Event* sourceEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "SendEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, sourceEvent);
}
inline void UnityEngine::UIElements::PanelEventHandler::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessImguiEvents(bool isSelected) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "ProcessImguiEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isSelected);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessKeyboardEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "ProcessKeyboardEvent",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessTabEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "ProcessTabEvent",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendTabEvent(::UnityEngine::Event* e, int32_t direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                                                             "SendTabEvent", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, direction);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendKeyUpEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "SendKeyUpEvent",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendKeyDownEvent(::UnityEngine::Event* e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "SendKeyDownEvent",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
/// @param eventType: ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType (default: static_cast<int32_t>(0x0))
inline bool UnityEngine::UIElements::PanelEventHandler::ReadPointerData(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent* pe, ::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                        ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), "ReadPointerData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pe, eventData, eventType);
}
inline ::UnityEngine::UIElements::PanelEventHandler* UnityEngine::UIElements::PanelEventHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PanelEventHandler*>());
}
inline void UnityEngine::UIElements::PanelEventHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelEventHandler::PanelEventHandler() {}
