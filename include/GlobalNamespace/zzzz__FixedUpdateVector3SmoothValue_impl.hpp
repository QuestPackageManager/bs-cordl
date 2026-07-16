#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedUpdateVector3SmoothValue.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateVector3SmoothValue_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateVector3SmoothValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedUpdateVector3SmoothValue::*)(float_t)>(&::GlobalNamespace::FixedUpdateVector3SmoothValue::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x585752c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedUpdateVector3SmoothValue.Interpolate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FixedUpdateVector3SmoothValue::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::FixedUpdateVector3SmoothValue::Interpolate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x585757c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(), { ::i2c::class_of<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(), 4 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FixedUpdateVector3SmoothValue::_ctor(float_t smooth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smooth);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FixedUpdateVector3SmoothValue::Interpolate(::UnityEngine::Vector3 value0, ::UnityEngine::Vector3 value1, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, value0, value1, t);
}
inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* GlobalNamespace::FixedUpdateVector3SmoothValue::New_ctor(float_t smooth) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(smooth));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue::FixedUpdateVector3SmoothValue() {}
