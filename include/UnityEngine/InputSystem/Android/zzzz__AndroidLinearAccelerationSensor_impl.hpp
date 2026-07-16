#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidLinearAccelerationSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__LinearAccelerationSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidLinearAccelerationSensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65a63b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor* UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::AndroidLinearAccelerationSensor() {}
