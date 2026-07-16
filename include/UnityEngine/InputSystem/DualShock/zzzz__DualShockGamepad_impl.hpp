#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DualShock/DualShockGamepad.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_impl.hpp"
#include "UnityEngine/InputSystem/DualShock/zzzz__DualShockGamepad_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/DualShock/zzzz__IDualShockHaptics_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_touchpadButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_touchpadButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_touchpadButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_touchpadButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_touchpadButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_touchpadButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_optionsButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_optionsButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_optionsButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_optionsButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_optionsButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_optionsButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_shareButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_shareButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_shareButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_shareButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_shareButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_shareButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_L1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_L1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_L1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_L1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_R1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_R1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_R1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_R1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_L2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_L2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_L2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_L2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_R2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_R2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_R2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_R2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_L3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_L3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_L3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_L3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_R3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_R3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_R3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a5e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_R3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::DualShock::DualShockGamepad* (*)()>(&::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65a5ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::DualShock::DualShockGamepad*)>(&::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x65a5ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                           { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.get_hidDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::get_hidDescriptor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a5f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_hidDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.set_hidDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::set_hidDescriptor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a5f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                             { "set_hidDescriptor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&::UnityEngine::InputSystem::DualShock::DualShockGamepad::MakeCurrent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x65a5f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&::UnityEngine::InputSystem::DualShock::DualShockGamepad::OnRemoved)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x65a5ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&::UnityEngine::InputSystem::DualShock::DualShockGamepad::FinishSetup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x65a6088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad.SetLightBarColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)(::UnityEngine::Color)>(
    &::UnityEngine::InputSystem::DualShock::DualShockGamepad::SetLightBarColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a617c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::DualShockGamepad._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DualShock::DualShockGamepad::*)()>(&::UnityEngine::InputSystem::DualShock::DualShockGamepad::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65a6180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__touchpadButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpadButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__touchpadButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpadButton_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__touchpadButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchpadButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__optionsButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__optionsButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsButton_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__optionsButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionsButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__shareButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shareButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__shareButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shareButton_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__shareButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shareButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__L1_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____L1_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__L1_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____L1_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__L1_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____L1_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__R1_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____R1_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__R1_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____R1_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__R1_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____R1_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__L2_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____L2_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__L2_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____L2_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__L2_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____L2_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__R2_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____R2_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__R2_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____R2_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__R2_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____R2_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__L3_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____L3_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__L3_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____L3_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__L3_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____L3_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__R3_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____R3_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__R3_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____R3_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__R3_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____R3_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__hidDescriptor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hidDescriptor_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor const& UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_get__hidDescriptor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hidDescriptor_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DualShock::DualShockGamepad::__cordl_internal_set__hidDescriptor_k__BackingField(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hidDescriptor_k__BackingField = value;
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::DualShock::DualShockGamepad* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::DualShock::DualShockGamepad*, "<current>k__BackingField", ::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(
      std::forward<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(value));
}
inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* UnityEngine::InputSystem::DualShock::DualShockGamepad::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::DualShock::DualShockGamepad*, "<current>k__BackingField", ::UnityEngine::InputSystem::DualShock::DualShockGamepad*>();
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_touchpadButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_touchpadButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_touchpadButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_touchpadButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_optionsButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_optionsButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_optionsButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_optionsButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_shareButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_shareButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_shareButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_shareButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_L1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L1(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_L1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_R1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R1(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_R1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_L2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L2(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_L2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_R2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R2(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_R2", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_L3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_L3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_L3(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_L3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_R3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_R3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_R3(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_R3", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* UnityEngine::InputSystem::DualShock::DualShockGamepad::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_current(::UnityEngine::InputSystem::DualShock::DualShockGamepad* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor UnityEngine::InputSystem::DualShock::DualShockGamepad::get_hidDescriptor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { "get_hidDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::set_hidDescriptor(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(),
                                                                                         { "set_hidDescriptor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::MakeCurrent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::OnRemoved() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::SetLightBarColor(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void UnityEngine::InputSystem::DualShock::DualShockGamepad::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* UnityEngine::InputSystem::DualShock::DualShockGamepad::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::DualShock::DualShockGamepad*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::DualShock::IDualShockHaptics"
constexpr UnityEngine::InputSystem::DualShock::DualShockGamepad::operator ::UnityEngine::InputSystem::DualShock::IDualShockHaptics*() noexcept {
  return static_cast<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::DualShock::IDualShockHaptics"
constexpr ::UnityEngine::InputSystem::DualShock::IDualShockHaptics* UnityEngine::InputSystem::DualShock::DualShockGamepad::i___UnityEngine__InputSystem__DualShock__IDualShockHaptics() noexcept {
  return static_cast<::UnityEngine::InputSystem::DualShock::IDualShockHaptics*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
constexpr UnityEngine::InputSystem::DualShock::DualShockGamepad::operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
constexpr ::UnityEngine::InputSystem::Haptics::IDualMotorRumble* UnityEngine::InputSystem::DualShock::DualShockGamepad::i___UnityEngine__InputSystem__Haptics__IDualMotorRumble() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IDualMotorRumble*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr UnityEngine::InputSystem::DualShock::DualShockGamepad::operator ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr ::UnityEngine::InputSystem::Haptics::IHaptics* UnityEngine::InputSystem::DualShock::DualShockGamepad::i___UnityEngine__InputSystem__Haptics__IHaptics() noexcept {
  return static_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::DualShock::DualShockGamepad::DualShockGamepad() {}
