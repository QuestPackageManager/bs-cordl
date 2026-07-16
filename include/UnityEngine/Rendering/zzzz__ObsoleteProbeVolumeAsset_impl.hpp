#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ObsoleteProbeVolumeAsset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ObsoleteProbeVolumeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ObsoleteProbeVolumeAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ObsoleteProbeVolumeAsset::*)()>(&::UnityEngine::Rendering::ObsoleteProbeVolumeAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x678c4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ObsoleteProbeVolumeAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ObsoleteProbeVolumeAsset* UnityEngine::Rendering::ObsoleteProbeVolumeAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ObsoleteProbeVolumeAsset::ObsoleteProbeVolumeAsset() {}
