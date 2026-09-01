#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\NoInterpMaxFloatParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpMaxFloatParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpMaxFloatParameter.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::NoInterpMaxFloatParameter::*)()>(&::UnityEngine::Rendering::NoInterpMaxFloatParameter::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cce08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpMaxFloatParameter.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::NoInterpMaxFloatParameter::*)(float_t)>(&::UnityEngine::Rendering::NoInterpMaxFloatParameter::set_value)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67cce10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpMaxFloatParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::NoInterpMaxFloatParameter::*)(float_t, float_t, bool)>(
    &::UnityEngine::Rendering::NoInterpMaxFloatParameter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67cce24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::NoInterpMaxFloatParameter::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::Rendering::NoInterpMaxFloatParameter::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::NoInterpMaxFloatParameter::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline float_t UnityEngine::Rendering::NoInterpMaxFloatParameter::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::NoInterpMaxFloatParameter::set_value(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::NoInterpMaxFloatParameter::_ctor(float_t value, float_t max, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, max, overrideState);
}
inline ::UnityEngine::Rendering::NoInterpMaxFloatParameter* UnityEngine::Rendering::NoInterpMaxFloatParameter::New_ctor(float_t value, float_t max, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::NoInterpMaxFloatParameter*>(value, max, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpMaxFloatParameter::NoInterpMaxFloatParameter() {}
