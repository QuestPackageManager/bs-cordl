#pragma once
// IWYU pragma private; include "GlobalNamespace\Interpolation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Interpolation_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Interpolation.Interpolate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::GlobalNamespace::EaseType)>(&::GlobalNamespace::Interpolation::Interpolate)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x64476ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Interpolation*>(), { "Interpolate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::Interpolation::Interpolate(float_t t, ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Interpolation*>(), { "Interpolate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t, easeType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interpolation::Interpolation() {}
