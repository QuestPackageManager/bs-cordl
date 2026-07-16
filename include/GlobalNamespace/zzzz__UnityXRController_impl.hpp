#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityXRController.hpp"
#include "GlobalNamespace/zzzz__VRControllerManufacturer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "BeatSaber/Haptics/zzzz__IHapticImpulseTransmitter_def.hpp"
#include "GlobalNamespace/zzzz__VRControllerManufacturer_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityXRController.get_hapticsHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Haptics::IHapticImpulseTransmitter* (::GlobalNamespace::UnityXRController::*)()>(
    &::GlobalNamespace::UnityXRController::get_hapticsHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "get_hapticsHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRController.set_hapticsHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRController::*)(::BeatSaber::Haptics::IHapticImpulseTransmitter*)>(
    &::GlobalNamespace::UnityXRController::set_hapticsHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(),
                                                                                           { "set_hapticsHandler", {}, { ::i2c::type_of<::BeatSaber::Haptics::IHapticImpulseTransmitter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRController.get_manufacturer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VRControllerManufacturer (::GlobalNamespace::UnityXRController::*)()>(
    &::GlobalNamespace::UnityXRController::get_manufacturer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "get_manufacturer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRController.set_manufacturer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRController::*)(::GlobalNamespace::VRControllerManufacturer)>(
    &::GlobalNamespace::UnityXRController::set_manufacturer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "set_manufacturer", {}, { ::i2c::type_of<::GlobalNamespace::VRControllerManufacturer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRController::*)(
    ::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputAction*)>(
    &::GlobalNamespace::UnityXRController::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x591a578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(),
                                ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRController.SetupController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRController::*)(::UnityEngine::XR::InputDevice, ::UnityEngine::MonoBehaviour*)>(
    &::GlobalNamespace::UnityXRController::SetupController)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x591b270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(),
                                                             { "SetupController", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRController.ResetManufacturerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRController::*)()>(&::GlobalNamespace::UnityXRController::ResetManufacturerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "ResetManufacturerName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRController.UpdateHapticsHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityXRController::*)(::UnityEngine::MonoBehaviour*)>(&::GlobalNamespace::UnityXRController::UpdateHapticsHandler)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x591b42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "UpdateHapticsHandler", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRController.TryToUpdateManufacturerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityXRController::*)(::UnityEngine::XR::InputDevice)>(
    &::GlobalNamespace::UnityXRController::TryToUpdateManufacturerName)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x591b2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "TryToUpdateManufacturerName", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRController::__cordl_internal_get_positionAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::UnityXRController::__cordl_internal_get_positionAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionAction;
}
constexpr void GlobalNamespace::UnityXRController::__cordl_internal_set_positionAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRController::__cordl_internal_get_rotationAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::UnityXRController::__cordl_internal_get_rotationAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationAction;
}
constexpr void GlobalNamespace::UnityXRController::__cordl_internal_set_rotationAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRController::__cordl_internal_get_thumbstickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thumbstickAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::UnityXRController::__cordl_internal_get_thumbstickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thumbstickAction;
}
constexpr void GlobalNamespace::UnityXRController::__cordl_internal_set_thumbstickAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thumbstickAction = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRController::__cordl_internal_get_triggerAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggerAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::UnityXRController::__cordl_internal_get_triggerAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggerAction;
}
constexpr void GlobalNamespace::UnityXRController::__cordl_internal_set_triggerAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triggerAction = value;
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::UnityXRController::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::UnityXRController::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void GlobalNamespace::UnityXRController::__cordl_internal_set_node(::UnityEngine::XR::XRNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___node = value;
}
constexpr ::BeatSaber::Haptics::IHapticImpulseTransmitter*& GlobalNamespace::UnityXRController::__cordl_internal_get__hapticsHandler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticsHandler_k__BackingField;
}
constexpr ::BeatSaber::Haptics::IHapticImpulseTransmitter* const& GlobalNamespace::UnityXRController::__cordl_internal_get__hapticsHandler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticsHandler_k__BackingField;
}
constexpr void GlobalNamespace::UnityXRController::__cordl_internal_set__hapticsHandler_k__BackingField(::BeatSaber::Haptics::IHapticImpulseTransmitter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticsHandler_k__BackingField = value;
}
constexpr ::GlobalNamespace::VRControllerManufacturer& GlobalNamespace::UnityXRController::__cordl_internal_get__manufacturer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manufacturer_k__BackingField;
}
constexpr ::GlobalNamespace::VRControllerManufacturer const& GlobalNamespace::UnityXRController::__cordl_internal_get__manufacturer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manufacturer_k__BackingField;
}
constexpr void GlobalNamespace::UnityXRController::__cordl_internal_set__manufacturer_k__BackingField(::GlobalNamespace::VRControllerManufacturer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____manufacturer_k__BackingField = value;
}
inline ::BeatSaber::Haptics::IHapticImpulseTransmitter* GlobalNamespace::UnityXRController::get_hapticsHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "get_hapticsHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Haptics::IHapticImpulseTransmitter*>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRController::set_hapticsHandler(::BeatSaber::Haptics::IHapticImpulseTransmitter* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(),
                                                                                         { "set_hapticsHandler", {}, { ::i2c::type_of<::BeatSaber::Haptics::IHapticImpulseTransmitter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::VRControllerManufacturer GlobalNamespace::UnityXRController::get_manufacturer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "get_manufacturer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRControllerManufacturer>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRController::set_manufacturer(::GlobalNamespace::VRControllerManufacturer value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "set_manufacturer", {}, { ::i2c::type_of<::GlobalNamespace::VRControllerManufacturer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRController::_ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::InputSystem::InputAction* positionAction, ::UnityEngine::InputSystem::InputAction* rotationAction,
                                                      ::UnityEngine::InputSystem::InputAction* thumbstickAction, ::UnityEngine::InputSystem::InputAction* triggerAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(),
                              ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, positionAction, rotationAction, thumbstickAction, triggerAction);
}
inline bool GlobalNamespace::UnityXRController::SetupController(::UnityEngine::XR::InputDevice device, ::UnityEngine::MonoBehaviour* coroutineRunner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(),
                                                           { "SetupController", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device, coroutineRunner);
}
inline void GlobalNamespace::UnityXRController::ResetManufacturerName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "ResetManufacturerName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRController::UpdateHapticsHandler(::UnityEngine::MonoBehaviour* coroutineRunner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "UpdateHapticsHandler", {}, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coroutineRunner);
}
inline bool GlobalNamespace::UnityXRController::TryToUpdateManufacturerName(::UnityEngine::XR::InputDevice device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityXRController*>(), { "TryToUpdateManufacturerName", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline ::GlobalNamespace::UnityXRController* GlobalNamespace::UnityXRController::New_ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::InputSystem::InputAction* positionAction,
                                                                                          ::UnityEngine::InputSystem::InputAction* rotationAction,
                                                                                          ::UnityEngine::InputSystem::InputAction* thumbstickAction,
                                                                                          ::UnityEngine::InputSystem::InputAction* triggerAction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityXRController*>(node, positionAction, rotationAction, thumbstickAction, triggerAction));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityXRController::UnityXRController() {}
