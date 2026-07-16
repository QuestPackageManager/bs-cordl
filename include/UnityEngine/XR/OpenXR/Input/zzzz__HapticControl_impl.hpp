#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/HapticControl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::HapticControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Input::HapticControl::*)()>(&::UnityEngine::XR::OpenXR::Input::HapticControl::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69f16c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::HapticControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Input::Haptic (::UnityEngine::XR::OpenXR::Input::HapticControl::*)(void*)>(
    &::UnityEngine::XR::OpenXR::Input::HapticControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69f1744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>(), 17 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Input::HapticControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Input::Haptic UnityEngine::XR::OpenXR::Input::HapticControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::Haptic>(this, ___internal_method, statePtr);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Input::HapticControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Input::HapticControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl::HapticControl() {}
