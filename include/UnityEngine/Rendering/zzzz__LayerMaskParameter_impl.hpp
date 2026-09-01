#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\LayerMaskParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LayerMaskParameter_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LayerMaskParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LayerMaskParameter::*)(::UnityEngine::LayerMask, bool)>(&::UnityEngine::Rendering::LayerMaskParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67cc7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LayerMaskParameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::LayerMaskParameter::_ctor(::UnityEngine::LayerMask value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LayerMaskParameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::LayerMaskParameter* UnityEngine::Rendering::LayerMaskParameter::New_ctor(::UnityEngine::LayerMask value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LayerMaskParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LayerMaskParameter::LayerMaskParameter() {}
