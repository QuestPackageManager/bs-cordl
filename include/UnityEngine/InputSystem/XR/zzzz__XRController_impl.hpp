#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRController.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRController.get_leftHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::XRController* (*)()>(&::UnityEngine::InputSystem::XR::XRController::get_leftHand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6581f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), { "get_leftHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRController.get_rightHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::XRController* (*)()>(&::UnityEngine::InputSystem::XR::XRController::get_rightHand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6581fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), { "get_rightHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRController.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::XRController::*)()>(&::UnityEngine::InputSystem::XR::XRController::FinishSetup)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x658208c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::XRController::*)()>(&::UnityEngine::InputSystem::XR::XRController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65821d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::XR::XRController* UnityEngine::InputSystem::XR::XRController::get_leftHand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), { "get_leftHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::XRController*>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRController* UnityEngine::InputSystem::XR::XRController::get_rightHand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), { "get_rightHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::XRController*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::XRController::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::XRController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRController* UnityEngine::InputSystem::XR::XRController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::XR::XRController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRController::XRController() {}
