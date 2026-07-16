#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Sensor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Sensor.get_samplingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Sensor::*)()>(&::UnityEngine::InputSystem::Sensor::get_samplingFrequency)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6560020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Sensor*>(), { "get_samplingFrequency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Sensor.set_samplingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Sensor::*)(float_t)>(&::UnityEngine::InputSystem::Sensor::set_samplingFrequency)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6560128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Sensor*>(), { "set_samplingFrequency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Sensor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Sensor::*)()>(&::UnityEngine::InputSystem::Sensor::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65601cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Sensor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::InputSystem::Sensor::get_samplingFrequency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Sensor*>(), { "get_samplingFrequency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Sensor::set_samplingFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Sensor*>(), { "set_samplingFrequency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Sensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Sensor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Sensor* UnityEngine::InputSystem::Sensor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Sensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Sensor::Sensor() {}
