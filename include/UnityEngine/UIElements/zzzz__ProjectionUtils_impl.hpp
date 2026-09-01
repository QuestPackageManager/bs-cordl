#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ProjectionUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ProjectionUtils_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ProjectionUtils.Ortho
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::UIElements::ProjectionUtils::Ortho)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6dbca74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::ProjectionUtils*>(),
            { "Ortho", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::ProjectionUtils::Ortho(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::ProjectionUtils*>(),
          { "Ortho", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, left, right, bottom, top, near, far);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ProjectionUtils::ProjectionUtils() {}
