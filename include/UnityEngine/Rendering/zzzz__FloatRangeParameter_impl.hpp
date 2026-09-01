#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\FloatRangeParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FloatRangeParameter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FloatRangeParameter.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::FloatRangeParameter::*)()>(&::UnityEngine::Rendering::FloatRangeParameter::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67ccf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FloatRangeParameter.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FloatRangeParameter::*)(::UnityEngine::Vector2)>(&::UnityEngine::Rendering::FloatRangeParameter::set_value)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67ccf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FloatRangeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FloatRangeParameter::*)(::UnityEngine::Vector2, float_t, float_t, bool)>(
    &::UnityEngine::Rendering::FloatRangeParameter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67ccfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FloatRangeParameter.Interp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FloatRangeParameter::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(
    &::UnityEngine::Rendering::FloatRangeParameter::Interp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67cd04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), 16 }));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::FloatRangeParameter::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::Rendering::FloatRangeParameter::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::FloatRangeParameter::__cordl_internal_set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& UnityEngine::Rendering::FloatRangeParameter::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::Rendering::FloatRangeParameter::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::FloatRangeParameter::__cordl_internal_set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::FloatRangeParameter::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rendering::FloatRangeParameter::set_value(::UnityEngine::Vector2 value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::FloatRangeParameter::_ctor(::UnityEngine::Vector2 value, float_t min, float_t max, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, min, max, overrideState);
}
inline void UnityEngine::Rendering::FloatRangeParameter::Interp(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::FloatRangeParameter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline ::UnityEngine::Rendering::FloatRangeParameter* UnityEngine::Rendering::FloatRangeParameter::New_ctor(::UnityEngine::Vector2 value, float_t min, float_t max, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::FloatRangeParameter*>(value, min, max, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FloatRangeParameter::FloatRangeParameter() {}
