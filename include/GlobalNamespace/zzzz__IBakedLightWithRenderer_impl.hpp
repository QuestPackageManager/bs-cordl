#pragma once
// IWYU pragma private; include "GlobalNamespace\IBakedLightWithRenderer.hpp"
#include "GlobalNamespace/zzzz__IBakedLightWithRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBakedLightWithRenderer.get_bakingMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::IBakedLightWithRenderer::*)()>(
    &::GlobalNamespace::IBakedLightWithRenderer::get_bakingMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBakedLightWithRenderer*>(), { ::i2c::class_of<::GlobalNamespace::IBakedLightWithRenderer*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::IBakedLightWithRenderer::get_bakingMaterial() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBakedLightWithRenderer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
