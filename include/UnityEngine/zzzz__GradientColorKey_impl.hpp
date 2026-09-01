#pragma once
// IWYU pragma private; include "UnityEngine\GradientColorKey.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GradientColorKey_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::GradientColorKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GradientColorKey::*)(::UnityEngine::Color, float_t)>(&::UnityEngine::GradientColorKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6acc014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GradientColorKey>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::GradientColorKey::_ctor(::UnityEngine::Color col, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GradientColorKey>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, col, time);
}
// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GradientColorKey::GradientColorKey(::UnityEngine::Color color, float_t time) noexcept {
  this->color = color;
  this->time = time;
}
// Ctor Parameters []
constexpr ::UnityEngine::GradientColorKey::GradientColorKey() {}
