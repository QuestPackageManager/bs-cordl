#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/DualShock4GamepadAndroid.hpp"
#include "UnityEngine/InputSystem/DualShock/zzzz__DualShockGamepad_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__DualShock4GamepadAndroid_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid::*)()>(
    &::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65a6298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::DualShock4GamepadAndroid::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid* UnityEngine::InputSystem::Android::DualShock4GamepadAndroid::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid::DualShock4GamepadAndroid() {}
