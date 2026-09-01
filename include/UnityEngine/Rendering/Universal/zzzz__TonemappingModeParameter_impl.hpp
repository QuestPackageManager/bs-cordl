#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\TonemappingModeParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TonemappingModeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TonemappingModeParameter::*)(::UnityEngine::Rendering::Universal::TonemappingMode, bool)>(
    &::UnityEngine::Rendering::Universal::TonemappingModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x687fd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TonemappingModeParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::TonemappingMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TonemappingModeParameter::_ctor(::UnityEngine::Rendering::Universal::TonemappingMode value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TonemappingModeParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::TonemappingMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::TonemappingModeParameter* UnityEngine::Rendering::Universal::TonemappingModeParameter::New_ctor(::UnityEngine::Rendering::Universal::TonemappingMode value,
                                                                                                                                            bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::TonemappingModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter::TonemappingModeParameter() {}
