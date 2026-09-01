#pragma once
// IWYU pragma private; include "GlobalNamespace\Ray2DExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Ray2DExtensions_def.hpp"
#include "UnityEngine/zzzz__Ray2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Ray2DExtensions.CircleIntersections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray2D, ::UnityEngine::Vector2, float_t, ::ArrayW<float_t>)>(
    &::GlobalNamespace::Ray2DExtensions::CircleIntersections)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x332683c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::Ray2DExtensions*>(),
            { "CircleIntersections", {}, { ::i2c::type_of<::UnityEngine::Ray2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Ray2DExtensions::CircleIntersections(::UnityEngine::Ray2D ray, ::UnityEngine::Vector2 circleCenter, float_t radius, ::ArrayW<float_t> distances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::Ray2DExtensions*>(),
          { "CircleIntersections", {}, { ::i2c::type_of<::UnityEngine::Ray2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, circleCenter, radius, distances);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Ray2DExtensions::Ray2DExtensions() {}
