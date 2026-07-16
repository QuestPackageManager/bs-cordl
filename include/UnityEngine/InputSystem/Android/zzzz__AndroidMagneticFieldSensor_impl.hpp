#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidMagneticFieldSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__MagneticFieldSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidMagneticFieldSensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::*)()>(
    &::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65a62f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor* UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor::AndroidMagneticFieldSensor() {}
