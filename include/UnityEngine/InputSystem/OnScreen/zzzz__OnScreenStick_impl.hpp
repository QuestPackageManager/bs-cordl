#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenStick.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenStick_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenStick_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour::OnScreenStick_Behaviour(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour::OnScreenStick_Behaviour() {}
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour::RelativePositionWithStaticOrigin{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour::ExactPositionWithStaticOrigin{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour::ExactPositionWithDynamicOrigin{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerDown)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65983e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                           { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDrag)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65986bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                           { "OnDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6598afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                           { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::Start)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x6598be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6599330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.BeginInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::BeginInteraction)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6598480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                             { "BeginInteraction", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.MoveStick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::MoveStick)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x6598758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                             { "MoveStick", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.EndInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::EndInteraction)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6598b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "EndInteraction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerDown)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x659940c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                           { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6599954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                           { "OnPointerChanged", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerMove)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6599ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                           { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerUp)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x65999bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                           { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.GetCameraFromCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::GetCameraFromCanvas)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6599830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "GetCameraFromCanvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6599c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "OnDrawGizmosSelected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.DrawGizmoCircle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::Vector2, float_t)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::DrawGizmoCircle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6599e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                           { "DrawGizmoCircle", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.UpdateDynamicOriginClickableArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::UpdateDynamicOriginClickableArea)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6599f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "UpdateDynamicOriginClickableArea", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_movementRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_movementRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "get_movementRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_movementRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(float_t)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_movementRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "set_movementRange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_dynamicOriginRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_dynamicOriginRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "get_dynamicOriginRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_dynamicOriginRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(float_t)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_dynamicOriginRange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x659a018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "set_dynamicOriginRange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_useIsolatedInputActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_useIsolatedInputActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "get_useIsolatedInputActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_useIsolatedInputActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(bool)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_useIsolatedInputActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "set_useIsolatedInputActions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_controlPathInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_controlPathInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_controlPathInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::StringW)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_controlPathInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.get_behaviour
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::get_behaviour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "get_behaviour", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick.set_behaviour
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)(::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour)>(
    &::UnityEngine::InputSystem::OnScreen::OnScreenStick::set_behaviour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                             { "set_behaviour", {}, { ::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenStick._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::OnScreen::OnScreenStick::*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenStick::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x659a060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_MovementRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MovementRange;
}
constexpr float_t const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_MovementRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MovementRange;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_MovementRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MovementRange = value;
}
constexpr float_t& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_DynamicOriginRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DynamicOriginRange;
}
constexpr float_t const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_DynamicOriginRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DynamicOriginRange;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_DynamicOriginRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DynamicOriginRange = value;
}
constexpr ::StringW& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_ControlPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlPath;
}
constexpr ::StringW const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_ControlPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlPath;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_ControlPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlPath = value;
}
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_Behaviour() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Behaviour;
}
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_Behaviour() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Behaviour;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_Behaviour(::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Behaviour = value;
}
constexpr bool& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_UseIsolatedInputActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseIsolatedInputActions;
}
constexpr bool const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_UseIsolatedInputActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseIsolatedInputActions;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_UseIsolatedInputActions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseIsolatedInputActions = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerDownAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerDownAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownAction;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_PointerDownAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerDownAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerMoveAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerMoveAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerMoveAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerMoveAction;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_PointerMoveAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerMoveAction = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_StartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartPos;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_StartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartPos;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_StartPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartPos = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerDownPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownPos;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerDownPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownPos;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_PointerDownPos(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerDownPos = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_RaycastResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResults;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_RaycastResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResults;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_RaycastResults(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastResults = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerEventData;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_PointerEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerEventData;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_PointerEventData(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerEventData = value;
}
constexpr ::UnityEngine::InputSystem::Controls::TouchControl*& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_TouchControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchControl;
}
constexpr ::UnityEngine::InputSystem::Controls::TouchControl* const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_TouchControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchControl;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_TouchControl(::UnityEngine::InputSystem::Controls::TouchControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchControl = value;
}
constexpr bool& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_IsIsolationActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsIsolationActive;
}
constexpr bool const& UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_get_m_IsIsolationActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsIsolationActive;
}
constexpr void UnityEngine::InputSystem::OnScreen::OnScreenStick::__cordl_internal_set_m_IsIsolationActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsIsolationActive = value;
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "OnDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::BeginInteraction(::UnityEngine::Vector2 pointerPosition, ::UnityEngine::Camera* uiCamera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                           { "BeginInteraction", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition, uiCamera);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::MoveStick(::UnityEngine::Vector2 pointerPosition, ::UnityEngine::Camera* uiCamera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "MoveStick", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition, uiCamera);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::EndInteraction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "EndInteraction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerDown(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerChanged(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "OnPointerChanged", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerMove(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnPointerUp(::UnityEngine::InputSystem::InputAction_CallbackContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::InputSystem::OnScreen::OnScreenStick::GetCameraFromCanvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "GetCameraFromCanvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "OnDrawGizmosSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::DrawGizmoCircle(::UnityEngine::Vector2 center, float_t radius) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                                                         { "DrawGizmoCircle", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, radius);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::UpdateDynamicOriginClickableArea() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "UpdateDynamicOriginClickableArea", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::OnScreen::OnScreenStick::get_movementRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "get_movementRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_movementRange(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "set_movementRange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::OnScreen::OnScreenStick::get_dynamicOriginRange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "get_dynamicOriginRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_dynamicOriginRange(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "set_dynamicOriginRange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::OnScreen::OnScreenStick::get_useIsolatedInputActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "get_useIsolatedInputActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_useIsolatedInputActions(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "set_useIsolatedInputActions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::OnScreen::OnScreenStick::get_controlPathInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_controlPathInternal(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour UnityEngine::InputSystem::OnScreen::OnScreenStick::get_behaviour() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { "get_behaviour", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::set_behaviour(::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(),
                                                           { "set_behaviour", {}, { ::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick_Behaviour>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::OnScreen::OnScreenStick::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::OnScreen::OnScreenStick* UnityEngine::InputSystem::OnScreen::OnScreenStick::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::OnScreen::OnScreenStick*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr UnityEngine::InputSystem::OnScreen::OnScreenStick::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* UnityEngine::InputSystem::OnScreen::OnScreenStick::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::InputSystem::OnScreen::OnScreenStick::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::InputSystem::OnScreen::OnScreenStick::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr UnityEngine::InputSystem::OnScreen::OnScreenStick::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* UnityEngine::InputSystem::OnScreen::OnScreenStick::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr UnityEngine::InputSystem::OnScreen::OnScreenStick::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* UnityEngine::InputSystem::OnScreen::OnScreenStick::i___UnityEngine__EventSystems__IDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenStick::OnScreenStick() {}
