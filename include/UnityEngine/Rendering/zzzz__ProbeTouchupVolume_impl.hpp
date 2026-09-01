#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ProbeTouchupVolume.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeAdjustmentVolume_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeTouchupVolume_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeTouchupVolume._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeTouchupVolume::*)()>(&::UnityEngine::Rendering::ProbeTouchupVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676fe3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeTouchupVolume*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ProbeTouchupVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeTouchupVolume*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeTouchupVolume* UnityEngine::Rendering::ProbeTouchupVolume::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeTouchupVolume*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeTouchupVolume::ProbeTouchupVolume() {}
