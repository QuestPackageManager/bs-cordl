#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGravitySensor.hpp"
#include "UnityEngine/InputSystem/zzzz__GravitySensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGravitySensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidGravitySensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidGravitySensor::*)()>(&::UnityEngine::InputSystem::Android::AndroidGravitySensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65a6398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidGravitySensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidGravitySensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Android::AndroidGravitySensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidGravitySensor* UnityEngine::InputSystem::Android::AndroidGravitySensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Android::AndroidGravitySensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidGravitySensor::AndroidGravitySensor() {}
