#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\MinFloatParameter.hpp"
#include "UnityEngine/Rendering/zzzz__FloatParameter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MinFloatParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::MinFloatParameter.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::MinFloatParameter::*)()>(&::UnityEngine::Rendering::MinFloatParameter::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cccf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MinFloatParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::MinFloatParameter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MinFloatParameter.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::MinFloatParameter::*)(float_t)>(&::UnityEngine::Rendering::MinFloatParameter::set_value)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67cccfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MinFloatParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::MinFloatParameter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MinFloatParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::MinFloatParameter::*)(float_t, float_t, bool)>(&::UnityEngine::Rendering::MinFloatParameter::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67ccd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MinFloatParameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::MinFloatParameter::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::Rendering::MinFloatParameter::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::MinFloatParameter::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
inline float_t UnityEngine::Rendering::MinFloatParameter::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::MinFloatParameter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::MinFloatParameter::set_value(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::MinFloatParameter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::MinFloatParameter::_ctor(float_t value, float_t min, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::MinFloatParameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, min, overrideState);
}
inline ::UnityEngine::Rendering::MinFloatParameter* UnityEngine::Rendering::MinFloatParameter::New_ctor(float_t value, float_t min, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::MinFloatParameter*>(value, min, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MinFloatParameter::MinFloatParameter() {}
