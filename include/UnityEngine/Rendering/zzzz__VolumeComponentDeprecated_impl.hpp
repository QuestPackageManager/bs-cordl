#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\VolumeComponentDeprecated.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponentDeprecated_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponentDeprecated._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponentDeprecated::*)()>(&::UnityEngine::Rendering::VolumeComponentDeprecated::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67cb354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponentDeprecated*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::VolumeComponentDeprecated::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponentDeprecated*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeComponentDeprecated* UnityEngine::Rendering::VolumeComponentDeprecated::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeComponentDeprecated*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeComponentDeprecated::VolumeComponentDeprecated() {}
