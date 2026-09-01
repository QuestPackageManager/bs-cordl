#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\APVLeakReductionModeParameter.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionModeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::APVLeakReductionModeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::APVLeakReductionModeParameter::*)(::UnityEngine::Rendering::APVLeakReductionMode, bool)>(
    &::UnityEngine::Rendering::APVLeakReductionModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6798c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::APVLeakReductionModeParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::APVLeakReductionMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::APVLeakReductionModeParameter::_ctor(::UnityEngine::Rendering::APVLeakReductionMode value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::APVLeakReductionModeParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::APVLeakReductionMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::APVLeakReductionModeParameter* UnityEngine::Rendering::APVLeakReductionModeParameter::New_ctor(::UnityEngine::Rendering::APVLeakReductionMode value,
                                                                                                                                bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::APVLeakReductionModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::APVLeakReductionModeParameter::APVLeakReductionModeParameter() {}
