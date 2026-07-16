#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/Lerp.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__Lerp_def.hpp"
#include "UnityEngine/UIElements/Experimental/zzzz__StyleValues_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::Lerp.Interpolate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::Experimental::Lerp::Interpolate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d1c6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::Lerp*>(),
                                                             { "Interpolate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::Lerp.Interpolate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color, float_t)>(&::UnityEngine::UIElements::Experimental::Lerp::Interpolate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d1c6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::Lerp*>(),
                                                             { "Interpolate", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Experimental::Lerp.Interpolate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Experimental::StyleValues (*)(
    ::UnityEngine::UIElements::Experimental::StyleValues, ::UnityEngine::UIElements::Experimental::StyleValues, float_t)>(&::UnityEngine::UIElements::Experimental::Lerp::Interpolate)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x6d1c718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::Lerp*>(),
                                                                                           { "Interpolate",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::Experimental::StyleValues>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::Experimental::StyleValues>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::UIElements::Experimental::Lerp::Interpolate(float_t start, float_t end, float_t ratio) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::Lerp*>(),
                                                                                         { "Interpolate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, ratio);
}
inline ::UnityEngine::Color UnityEngine::UIElements::Experimental::Lerp::Interpolate(::UnityEngine::Color start, ::UnityEngine::Color end, float_t ratio) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::Lerp*>(),
                                                           { "Interpolate", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, start, end, ratio);
}
inline ::UnityEngine::UIElements::Experimental::StyleValues UnityEngine::UIElements::Experimental::Lerp::Interpolate(::UnityEngine::UIElements::Experimental::StyleValues start,
                                                                                                                     ::UnityEngine::UIElements::Experimental::StyleValues end, float_t ratio) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Experimental::Lerp*>(),
                                                                                         { "Interpolate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::Experimental::StyleValues>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::Experimental::StyleValues>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Experimental::StyleValues>(nullptr, ___internal_method, start, end, ratio);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Experimental::Lerp::Lerp() {}
