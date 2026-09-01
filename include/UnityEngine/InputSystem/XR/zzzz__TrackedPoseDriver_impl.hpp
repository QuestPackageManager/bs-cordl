#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\XR\TrackedPoseDriver.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType::TrackedPoseDriver_TrackingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType::TrackedPoseDriver_TrackingType() {}
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType::RotationAndPosition{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType::RotationOnly{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType::PositionOnly{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates::TrackedPoseDriver_TrackingStates(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates::TrackedPoseDriver_TrackingStates() {}
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates::Position{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates::Rotation{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType::TrackedPoseDriver_UpdateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType::TrackedPoseDriver_UpdateType() {}
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType::UpdateAndBeforeRender{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType::Update{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType::BeforeRender{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_trackingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6587af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_trackingType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_trackingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6587afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "set_trackingType", {}, { ::i2c::type_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_updateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6587b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_updateType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_updateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6587b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "set_updateType", {}, { ::i2c::type_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_ignoreTrackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_ignoreTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6587b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_ignoreTrackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_ignoreTrackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(bool)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_ignoreTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6587b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "set_ignoreTrackingState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6587b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_positionInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6587b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                           { "set_positionInput", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6587ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_rotationInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6588008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                           { "set_rotationInput", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_trackingStateInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingStateInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65884c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_trackingStateInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_trackingStateInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingStateInput)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x65884d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                           { "set_trackingStateInput", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6588994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "BindActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65889b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnbindActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6587de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "BindPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x65882b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "BindRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindTrackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindTrackingState)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6588780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "BindTrackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.RenameAndEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*, ::StringW)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::RenameAndEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65889d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "RenameAndEnable", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6587c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnbindPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x65880f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnbindRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindTrackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindTrackingState)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x65885c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnbindTrackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6588a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "OnPositionPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6588a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "OnPositionCanceled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6588ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "OnRotationPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6588b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "OnRotationCanceled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnTrackingStatePerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnTrackingStatePerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6588b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "OnTrackingStatePerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnTrackingStateCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnTrackingStateCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6588bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                             { "OnTrackingStateCanceled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6588be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6588d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6588e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6588ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6588f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UpdateCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6588f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UpdateCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.ReadTrackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::ReadTrackingState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x65890d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "ReadTrackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x658921c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnBeforeRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6589238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.PerformUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6589258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.SetLocalTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6589274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.HasStereoCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::by_ref<::UnityEngine::Camera*>)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6588d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "HasStereoCamera", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65893d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_positionAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65893dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                           { "set_positionAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65893fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_rotationAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6589408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                           { "set_rotationAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6589428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x658942c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6589474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_TrackingType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingType = value;
}
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_UpdateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_UpdateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_UpdateType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateType = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_IgnoreTrackingState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreTrackingState;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_IgnoreTrackingState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreTrackingState;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_IgnoreTrackingState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreTrackingState = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionInput;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionInput;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionInput = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationInput;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationInput;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotationInput = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingStateInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingStateInput;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingStateInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingStateInput;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_TrackingStateInput(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingStateInput = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPosition;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_CurrentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentRotation;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_CurrentRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentRotation = value;
}
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentTrackingState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTrackingState;
}
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_CurrentTrackingState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTrackingState;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_CurrentTrackingState(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingStates value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTrackingState = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationBound;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationBound;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_RotationBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotationBound = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionBound;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionBound;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_PositionBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionBound = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingStateBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingStateBound;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_TrackingStateBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingStateBound;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_TrackingStateBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingStateBound = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_IsFirstUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFirstUpdate;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_IsFirstUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFirstUpdate;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_IsFirstUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsFirstUpdate = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_PositionAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionAction;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_PositionAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_get_m_RotationAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationAction;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__cordl_internal_set_m_RotationAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotationAction = value;
}
inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_trackingType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                           { "set_trackingType", {}, { ::i2c::type_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver_TrackingType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_updateType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType(::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                           { "set_updateType", {}, { ::i2c::type_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver_UpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::XR::TrackedPoseDriver::get_ignoreTrackingState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_ignoreTrackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_ignoreTrackingState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "set_ignoreTrackingState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_positionInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                         { "set_positionInput", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_rotationInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                         { "set_rotationInput", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingStateInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_trackingStateInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingStateInput(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                         { "set_trackingStateInput", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "BindActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnbindActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "BindPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "BindRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindTrackingState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "BindTrackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::RenameAndEnable(::UnityEngine::InputSystem::InputAction* action, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                           { "RenameAndEnable", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, name);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnbindPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnbindRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindTrackingState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnbindTrackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                           { "OnPositionPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                         { "OnPositionCanceled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                           { "OnRotationPerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                         { "OnRotationCanceled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnTrackingStatePerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                           { "OnTrackingStatePerformed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnTrackingStateCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                           { "OnTrackingStateCanceled", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UpdateCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::ReadTrackingState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "ReadTrackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPosition, newRotation);
}
inline bool UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera(::by_ref<::UnityEngine::Camera*> cameraComponent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "HasStereoCamera", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraComponent);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_positionAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction(::UnityEngine::InputSystem::InputAction* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                         { "set_positionAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "get_rotationAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction(::UnityEngine::InputSystem::InputAction* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(),
                                                                                         { "set_rotationAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver* UnityEngine::InputSystem::XR::TrackedPoseDriver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::InputSystem::XR::TrackedPoseDriver::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::InputSystem::XR::TrackedPoseDriver::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver::TrackedPoseDriver() {}
