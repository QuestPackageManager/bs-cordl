#pragma once
// IWYU pragma private; include "UnityEngine/GradientAlphaKey.hpp"
#include "UnityEngine/zzzz__GradientAlphaKey_def.hpp"
//  Writing Method size for method: ::UnityEngine::GradientAlphaKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GradientAlphaKey::*)(float_t, float_t)>(&::UnityEngine::GradientAlphaKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac8cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GradientAlphaKey>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::GradientAlphaKey::_ctor(float_t alpha, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GradientAlphaKey>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, alpha, time);
}
// Ctor Parameters [CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GradientAlphaKey::GradientAlphaKey(float_t alpha, float_t time) noexcept {
  this->alpha = alpha;
  this->time = time;
}
// Ctor Parameters []
constexpr ::UnityEngine::GradientAlphaKey::GradientAlphaKey() {}
