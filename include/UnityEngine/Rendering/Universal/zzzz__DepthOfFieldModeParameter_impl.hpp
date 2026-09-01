#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DepthOfFieldModeParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfFieldMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfFieldModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfFieldMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter::*)(::UnityEngine::Rendering::Universal::DepthOfFieldMode, bool)>(
    &::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x687ea5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthOfFieldMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DepthOfFieldModeParameter::_ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthOfFieldMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter*
UnityEngine::Rendering::Universal::DepthOfFieldModeParameter::New_ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter::DepthOfFieldModeParameter() {}
