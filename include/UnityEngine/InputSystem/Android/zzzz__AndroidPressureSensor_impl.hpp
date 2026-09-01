#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidPressureSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__PressureSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidPressureSensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidPressureSensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidPressureSensor::*)()>(&::UnityEngine::InputSystem::Android::AndroidPressureSensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65abb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidPressureSensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidPressureSensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidPressureSensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidPressureSensor* UnityEngine::InputSystem::Android::AndroidPressureSensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidPressureSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidPressureSensor::AndroidPressureSensor() {}
