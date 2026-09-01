#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\XboxOneGamepadAndroid.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__XboxOneGamepadAndroid_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::*)()>(&::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65abad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid* UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::XboxOneGamepadAndroid() {}
