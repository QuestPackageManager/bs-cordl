#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionBlurModeParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionBlurModeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::MotionBlurModeParameter::*)(::UnityEngine::Rendering::Universal::MotionBlurMode, bool)>(
    &::UnityEngine::Rendering::Universal::MotionBlurModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6879974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionBlurModeParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::MotionBlurMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::MotionBlurModeParameter::_ctor(::UnityEngine::Rendering::Universal::MotionBlurMode value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionBlurModeParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::MotionBlurMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::MotionBlurModeParameter* UnityEngine::Rendering::Universal::MotionBlurModeParameter::New_ctor(::UnityEngine::Rendering::Universal::MotionBlurMode value,
                                                                                                                                          bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::MotionBlurModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionBlurModeParameter::MotionBlurModeParameter() {}
