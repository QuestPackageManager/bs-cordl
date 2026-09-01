#pragma once
// IWYU pragma private; include "GlobalNamespace\GradientLutBaker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GradientLutBaker_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GradientLutBaker.BakeLut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::Gradient*, int32_t, ::UnityEngine::FilterMode)>(
    &::GlobalNamespace::GradientLutBaker::BakeLut)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x36f85b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientLutBaker*>(),
                                                { "BakeLut", {}, { ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FilterMode>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::GradientLutBaker::BakeLut(::UnityEngine::Gradient* gradient, int32_t width, ::UnityEngine::FilterMode filterMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientLutBaker*>(),
                                                           { "BakeLut", {}, { ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FilterMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, gradient, width, filterMode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GradientLutBaker::GradientLutBaker() {}
