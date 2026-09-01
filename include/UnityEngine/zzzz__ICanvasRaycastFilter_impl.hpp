#pragma once
// IWYU pragma private; include "UnityEngine\ICanvasRaycastFilter.hpp"
#include "UnityEngine/zzzz__ICanvasRaycastFilter_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ICanvasRaycastFilter.IsRaycastLocationValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ICanvasRaycastFilter::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::ICanvasRaycastFilter::IsRaycastLocationValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ICanvasRaycastFilter*>(), { ::i2c::class_of<::UnityEngine::ICanvasRaycastFilter*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::ICanvasRaycastFilter::IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ICanvasRaycastFilter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sp, eventCamera);
}
