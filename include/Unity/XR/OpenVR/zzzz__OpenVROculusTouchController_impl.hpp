#pragma once
// IWYU pragma private; include "Unity\XR\OpenVR\OpenVROculusTouchController.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_impl.hpp"
#include "Unity/XR/OpenVR/zzzz__OpenVROculusTouchController_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d12c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_thumbstick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_thumbstick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d12d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                           { "set_thumbstick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d12d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_trigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d12e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                           { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d12e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_grip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d12f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                           { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_primaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d12f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_primaryButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_primaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                           { "set_primaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_secondaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_secondaryButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_secondaryButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                           { "set_secondaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_gripPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                           { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_triggerPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                           { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_thumbstickClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_thumbstickClicked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_thumbstickClicked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                             { "set_thumbstickClicked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_thumbstickTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_thumbstickTouched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_thumbstickTouched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                             { "set_thumbstickTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_deviceVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_deviceVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_deviceVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_deviceVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_deviceVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                           { "set_deviceVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.get_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::get_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_deviceAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.set_deviceAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::Unity::XR::OpenVR::OpenVROculusTouchController::set_deviceAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                             { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(&::Unity::XR::OpenVR::OpenVROculusTouchController::FinishSetup)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x64d1378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { ::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::OpenVROculusTouchController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::OpenVROculusTouchController::*)()>(&::Unity::XR::OpenVR::OpenVROculusTouchController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d15f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__thumbstick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__thumbstick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstick_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__trigger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__trigger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__grip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__grip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__primaryButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__primaryButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryButton_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__secondaryButton_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__secondaryButton_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondaryButton_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secondaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__gripPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__gripPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__triggerPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__triggerPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__thumbstickClicked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickClicked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__thumbstickClicked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickClicked_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstickClicked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__thumbstickTouched_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__thumbstickTouched_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thumbstickTouched_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thumbstickTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__deviceVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__deviceVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceVelocity_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__deviceAngularVelocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_get__deviceAngularVelocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceAngularVelocity_k__BackingField;
}
constexpr void Unity::XR::OpenVR::OpenVROculusTouchController::__cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceAngularVelocity_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Unity::XR::OpenVR::OpenVROculusTouchController::get_thumbstick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_thumbstick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_thumbstick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* Unity::XR::OpenVR::OpenVROculusTouchController::get_trigger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_trigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* Unity::XR::OpenVR::OpenVROculusTouchController::get_grip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_grip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVROculusTouchController::get_primaryButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_primaryButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_primaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVROculusTouchController::get_secondaryButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_secondaryButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_secondaryButton", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVROculusTouchController::get_gripPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_gripPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVROculusTouchController::get_triggerPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_triggerPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVROculusTouchController::get_thumbstickClicked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_thumbstickClicked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_thumbstickClicked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::OpenVROculusTouchController::get_thumbstickTouched() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_thumbstickTouched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_thumbstickTouched", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::OpenVR::OpenVROculusTouchController::get_deviceVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_deviceVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                                                         { "set_deviceVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* Unity::XR::OpenVR::OpenVROculusTouchController::get_deviceAngularVelocity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { "get_deviceAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(),
                                                           { "set_deviceAngularVelocity", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::OpenVROculusTouchController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::OpenVROculusTouchController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::OpenVR::OpenVROculusTouchController* Unity::XR::OpenVR::OpenVROculusTouchController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::OpenVR::OpenVROculusTouchController*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::OpenVR::OpenVROculusTouchController::OpenVROculusTouchController() {}
