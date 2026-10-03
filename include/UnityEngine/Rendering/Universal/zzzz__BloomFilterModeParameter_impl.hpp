#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BloomFilterModeParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomFilterMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomFilterModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomFilterMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BloomFilterModeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::BloomFilterModeParameter::*)(::UnityEngine::Rendering::Universal::BloomFilterMode, bool)>(
    &::UnityEngine::Rendering::Universal::BloomFilterModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6cbcdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BloomFilterModeParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::BloomFilterMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::BloomFilterModeParameter::_ctor(::UnityEngine::Rendering::Universal::BloomFilterMode value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BloomFilterModeParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::BloomFilterMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::BloomFilterModeParameter* UnityEngine::Rendering::Universal::BloomFilterModeParameter::New_ctor(::UnityEngine::Rendering::Universal::BloomFilterMode value,
                                                                                                                                            bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::BloomFilterModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::BloomFilterModeParameter::BloomFilterModeParameter() {}
