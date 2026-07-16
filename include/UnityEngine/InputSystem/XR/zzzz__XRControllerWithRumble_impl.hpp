#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRControllerWithRumble.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRControllerWithRumble.SendImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::XRControllerWithRumble::*)(float_t, float_t)>(
    &::UnityEngine::InputSystem::XR::XRControllerWithRumble::SendImpulse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x65821f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRControllerWithRumble*>(), { "SendImpulse", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRControllerWithRumble._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::XRControllerWithRumble::*)()>(&::UnityEngine::InputSystem::XR::XRControllerWithRumble::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65822bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRControllerWithRumble*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::XR::XRControllerWithRumble::SendImpulse(float_t amplitude, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRControllerWithRumble*>(), { "SendImpulse", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amplitude, duration);
}
inline void UnityEngine::InputSystem::XR::XRControllerWithRumble::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRControllerWithRumble*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRControllerWithRumble* UnityEngine::InputSystem::XR::XRControllerWithRumble::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::XR::XRControllerWithRumble*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRControllerWithRumble::XRControllerWithRumble() {}
