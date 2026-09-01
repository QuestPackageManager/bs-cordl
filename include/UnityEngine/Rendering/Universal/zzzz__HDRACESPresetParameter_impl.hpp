#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\HDRACESPresetParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRACESPreset_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRACESPresetParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRACESPreset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::HDRACESPresetParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::HDRACESPresetParameter::*)(::UnityEngine::Rendering::Universal::HDRACESPreset, bool)>(
    &::UnityEngine::Rendering::Universal::HDRACESPresetParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x687fe28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRACESPresetParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRACESPreset>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::HDRACESPresetParameter::_ctor(::UnityEngine::Rendering::Universal::HDRACESPreset value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::HDRACESPresetParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRACESPreset>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::HDRACESPresetParameter* UnityEngine::Rendering::Universal::HDRACESPresetParameter::New_ctor(::UnityEngine::Rendering::Universal::HDRACESPreset value,
                                                                                                                                        bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::HDRACESPresetParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::HDRACESPresetParameter::HDRACESPresetParameter() {}
