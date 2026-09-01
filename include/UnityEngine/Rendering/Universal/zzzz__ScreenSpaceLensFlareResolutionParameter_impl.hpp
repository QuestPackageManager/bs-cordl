#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ScreenSpaceLensFlareResolutionParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceLensFlareResolution_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceLensFlareResolutionParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceLensFlareResolution_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter::*)(
    ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution, bool)>(&::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x687f6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter::_ctor(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter*
UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter::New_ctor(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter::ScreenSpaceLensFlareResolutionParameter() {}
