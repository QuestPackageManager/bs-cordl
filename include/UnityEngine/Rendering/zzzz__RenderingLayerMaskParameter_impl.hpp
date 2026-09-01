#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderingLayerMaskParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderingLayerMaskParameter_def.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderingLayerMaskParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderingLayerMaskParameter::*)(::UnityEngine::RenderingLayerMask, bool)>(
    &::UnityEngine::Rendering::RenderingLayerMaskParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67cc808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderingLayerMaskParameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderingLayerMaskParameter::_ctor(::UnityEngine::RenderingLayerMask value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderingLayerMaskParameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::RenderingLayerMaskParameter* UnityEngine::Rendering::RenderingLayerMaskParameter::New_ctor(::UnityEngine::RenderingLayerMask value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderingLayerMaskParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderingLayerMaskParameter::RenderingLayerMaskParameter() {}
