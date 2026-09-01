#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DownscaleParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomDownscaleMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DownscaleParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomDownscaleMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DownscaleParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DownscaleParameter::*)(::UnityEngine::Rendering::Universal::BloomDownscaleMode, bool)>(
    &::UnityEngine::Rendering::Universal::DownscaleParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68741c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DownscaleParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::BloomDownscaleMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DownscaleParameter::_ctor(::UnityEngine::Rendering::Universal::BloomDownscaleMode value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DownscaleParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::BloomDownscaleMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::DownscaleParameter* UnityEngine::Rendering::Universal::DownscaleParameter::New_ctor(::UnityEngine::Rendering::Universal::BloomDownscaleMode value,
                                                                                                                                bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DownscaleParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DownscaleParameter::DownscaleParameter() {}
