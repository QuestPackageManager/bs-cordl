#pragma once
// IWYU pragma private; include "Unity\XR\Oculus\Input\OculusTouchController.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_impl.hpp"
#include "Unity/XR/Oculus/Input/zzzz__OculusTouchController_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_thumbstick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_thumbstick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_trigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_grip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_primaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_primaryButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_primaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_primaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_secondaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_secondaryButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_secondaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_secondaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d19f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_gripPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_start", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_thumbstickClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_thumbstickClicked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_thumbstickClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                             { "set_thumbstickClicked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_primaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_primaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_primaryTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_primaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_primaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_primaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_secondaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_secondaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_secondaryTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_secondaryTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_secondaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                             { "set_secondaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_triggerTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_triggerTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_triggerTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_triggerTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_triggerPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_thumbstickTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_thumbstickTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_thumbstickTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                             { "set_thumbstickTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_deviceVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_deviceVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_deviceVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_deviceVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_deviceVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                           { "set_deviceVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_deviceAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                             { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_deviceAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_deviceAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_deviceAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_deviceAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_deviceAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                             { "set_deviceAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.get_deviceAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(
    &::Unity::XR::Oculus::Input::OculusTouchController::get_deviceAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_deviceAngularAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.set_deviceAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::Oculus::Input::OculusTouchController::set_deviceAngularAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                             { "set_deviceAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(&::Unity::XR::Oculus::Input::OculusTouchController::FinishSetup)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x64d1ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { ::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusTouchController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::Oculus::Input::OculusTouchController::*)()>(&::Unity::XR::Oculus::Input::OculusTouchController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d1e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__thumbstick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__thumbstick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstick_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__trigger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__trigger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__grip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__grip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__primaryButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__primaryButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryButton_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__secondaryButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__secondaryButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryButton_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__gripPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__gripPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__start_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__start_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__start_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____start_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__thumbstickClicked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickClicked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__thumbstickClicked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickClicked_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstickClicked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__primaryTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__primaryTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouched_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__primaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__secondaryTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__secondaryTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryTouched_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__secondaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__triggerTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__triggerTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerTouched_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__triggerPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__triggerPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__thumbstickTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__thumbstickTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickTouched_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstickTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__deviceVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__deviceVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceVelocity_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__deviceAngularVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__deviceAngularVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAngularVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__deviceAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__deviceAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAcceleration_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__deviceAngularAcceleration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularAcceleration_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_get__deviceAngularAcceleration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularAcceleration_k__BackingField;
}
constexpr void Unity::XR::Oculus::Input::OculusTouchController::__cordl_internal_set__deviceAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAngularAcceleration_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Unity::XR::Oculus::Input::OculusTouchController::get_thumbstick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_thumbstick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_thumbstick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* Unity::XR::Oculus::Input::OculusTouchController::get_trigger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_trigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* Unity::XR::Oculus::Input::OculusTouchController::get_grip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_grip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_primaryButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_primaryButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_primaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_secondaryButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_secondaryButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_secondaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_gripPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_gripPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_start(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_start", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_thumbstickClicked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_thumbstickClicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_thumbstickClicked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_primaryTouched() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_primaryTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_primaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_secondaryTouched() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_secondaryTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_secondaryTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* Unity::XR::Oculus::Input::OculusTouchController::get_triggerTouched() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_triggerTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_triggerTouched(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_triggerTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_triggerPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_triggerPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::Oculus::Input::OculusTouchController::get_thumbstickTouched() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_thumbstickTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_thumbstickTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusTouchController::get_deviceVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_deviceVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                                                         { "set_deviceVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusTouchController::get_deviceAngularVelocity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_deviceAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                           { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusTouchController::get_deviceAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_deviceAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                           { "set_deviceAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::Oculus::Input::OculusTouchController::get_deviceAngularAcceleration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { "get_deviceAngularAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(),
                                                           { "set_deviceAngularAcceleration", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::Oculus::Input::OculusTouchController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::Oculus::Input::OculusTouchController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::Oculus::Input::OculusTouchController* Unity::XR::Oculus::Input::OculusTouchController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::Oculus::Input::OculusTouchController*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Input::OculusTouchController::OculusTouchController() {}
