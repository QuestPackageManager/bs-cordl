#pragma once
// IWYU pragma private; include "TMPro\ITweenValue.hpp"
#include "TMPro/zzzz__ITweenValue_def.hpp"
//  Writing Method size for method: ::TMPro::ITweenValue.TweenValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ITweenValue::*)(float_t)>(&::TMPro::ITweenValue::TweenValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::ITweenValue*>(), { ::i2c::class_of<::TMPro::ITweenValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ITweenValue.get_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::ITweenValue::*)()>(&::TMPro::ITweenValue::get_ignoreTimeScale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::ITweenValue*>(), { ::i2c::class_of<::TMPro::ITweenValue*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ITweenValue.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::ITweenValue::*)()>(&::TMPro::ITweenValue::get_duration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::ITweenValue*>(), { ::i2c::class_of<::TMPro::ITweenValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ITweenValue.ValidTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::ITweenValue::*)()>(&::TMPro::ITweenValue::ValidTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::ITweenValue*>(), { ::i2c::class_of<::TMPro::ITweenValue*>(), 3 }));
    return ___internal_method;
  }
};
inline void TMPro::ITweenValue::TweenValue(float_t floatPercentage) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::ITweenValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, floatPercentage);
}
inline bool TMPro::ITweenValue::get_ignoreTimeScale() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::ITweenValue*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t TMPro::ITweenValue::get_duration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::ITweenValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool TMPro::ITweenValue::ValidTarget() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::ITweenValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
