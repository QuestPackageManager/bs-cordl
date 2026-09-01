#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\NeutralRangeReductionModeParameter.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::*)(
    ::UnityEngine::Rendering::Universal::NeutralRangeReductionMode, bool)>(&::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x687fdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::NeutralRangeReductionMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::_ctor(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::NeutralRangeReductionMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*
UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::New_ctor(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter::NeutralRangeReductionModeParameter() {}
