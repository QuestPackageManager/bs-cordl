#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\MotionBlurQualityParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurQuality_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurQualityParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurQuality_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::MotionBlurQualityParameter::*)(::UnityEngine::Rendering::Universal::MotionBlurQuality, bool)>(
    &::UnityEngine::Rendering::Universal::MotionBlurQualityParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x687f1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionBlurQualityParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::MotionBlurQuality>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::MotionBlurQualityParameter::_ctor(::UnityEngine::Rendering::Universal::MotionBlurQuality value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionBlurQualityParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::MotionBlurQuality>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter*
UnityEngine::Rendering::Universal::MotionBlurQualityParameter::New_ctor(::UnityEngine::Rendering::Universal::MotionBlurQuality value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::MotionBlurQualityParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter::MotionBlurQualityParameter() {}
