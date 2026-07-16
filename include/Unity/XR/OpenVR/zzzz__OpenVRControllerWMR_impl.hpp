#pragma once
// IWYU pragma private; include "Unity/XR/OpenVR/OpenVRControllerWMR.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_impl.hpp"
#include "Unity/XR/OpenVR/zzzz__OpenVRControllerWMR_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_deviceVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_deviceVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_deviceVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_deviceVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_deviceVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_deviceVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_deviceAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                             { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_touchpadClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_touchpadClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_touchpadClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_touchpadClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_touchpadClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_touchpadClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_touchpadTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_touchpadTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_touchpadTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_touchpadTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_touchpadTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_touchpadTouch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_gripPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_triggerPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_menu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_menu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_menu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_menu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_trigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_grip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_touchpad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_touchpad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_touchpad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_touchpad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_touchpad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_touchpad", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.get_joystick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::get_joystick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_joystick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.set_joystick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::Unity::XR::OpenVR::OpenVRControllerWMR::set_joystick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cb244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                           { "set_joystick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(&::Unity::XR::OpenVR::OpenVRControllerWMR::FinishSetup)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x64cb24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { ::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVRControllerWMR._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVRControllerWMR::*)()>(&::Unity::XR::OpenVR::OpenVRControllerWMR::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64cb4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__deviceVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__deviceVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceVelocity_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__deviceAngularVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__deviceAngularVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAngularVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__touchpadClick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpadClick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__touchpadClick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpadClick_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__touchpadClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchpadClick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__touchpadTouch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpadTouch_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__touchpadTouch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpadTouch_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__touchpadTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchpadTouch_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__gripPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__gripPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__triggerPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__triggerPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__menu_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__menu_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menu_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menu_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__trigger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__trigger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__grip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__grip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__touchpad_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpad_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__touchpad_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touchpad_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touchpad_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__joystick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joystick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_get__joystick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joystick_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVRControllerWMR::__cordl_internal_set__joystick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____joystick_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::OpenVR::OpenVRControllerWMR::get_deviceVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_deviceVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                         { "set_deviceVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::OpenVR::OpenVRControllerWMR::get_deviceAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_deviceAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                           { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVRControllerWMR::get_touchpadClick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_touchpadClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_touchpadClick(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                         { "set_touchpadClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVRControllerWMR::get_touchpadTouch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_touchpadTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_touchpadTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                         { "set_touchpadTouch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVRControllerWMR::get_gripPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_gripPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                         { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVRControllerWMR::get_triggerPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_triggerPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                         { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVRControllerWMR::get_menu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_menu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "set_menu", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* Unity::XR::OpenVR::OpenVRControllerWMR::get_trigger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_trigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* Unity::XR::OpenVR::OpenVRControllerWMR::get_grip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_grip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Unity::XR::OpenVR::OpenVRControllerWMR::get_touchpad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_touchpad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                         { "set_touchpad", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Unity::XR::OpenVR::OpenVRControllerWMR::get_joystick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { "get_joystick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(),
                                                                                         { "set_joystick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVRControllerWMR::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVRControllerWMR*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::OpenVR::OpenVRControllerWMR* Unity::XR::OpenVR::OpenVRControllerWMR::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::OpenVR::OpenVRControllerWMR*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::OpenVR::OpenVRControllerWMR::OpenVRControllerWMR() {}
