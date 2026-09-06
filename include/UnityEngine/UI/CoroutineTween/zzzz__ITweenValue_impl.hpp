#pragma once
// IWYU pragma private; include "UnityEngine/UI/CoroutineTween/ITweenValue.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ITweenValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ITweenValue.TweenValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CoroutineTween::ITweenValue::*)(float_t)>(&::UnityEngine::UI::CoroutineTween::ITweenValue::TweenValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), { ::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ITweenValue.get_ignoreTimeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&::UnityEngine::UI::CoroutineTween::ITweenValue::get_ignoreTimeScale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), { ::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ITweenValue.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&::UnityEngine::UI::CoroutineTween::ITweenValue::get_duration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), { ::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ITweenValue.ValidTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ITweenValue::*)()>(&::UnityEngine::UI::CoroutineTween::ITweenValue::ValidTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), { ::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::CoroutineTween::ITweenValue::TweenValue(float_t floatPercentage) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, floatPercentage);
}
inline bool UnityEngine::UI::CoroutineTween::ITweenValue::get_ignoreTimeScale() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UI::CoroutineTween::ITweenValue::get_duration() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::UI::CoroutineTween::ITweenValue::ValidTarget() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CoroutineTween::ITweenValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
