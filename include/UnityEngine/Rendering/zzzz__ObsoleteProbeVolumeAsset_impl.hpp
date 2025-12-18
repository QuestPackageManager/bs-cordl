#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ObsoleteProbeVolumeAsset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ObsoleteProbeVolumeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ObsoleteProbeVolumeAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ObsoleteProbeVolumeAsset::*)()>(
    &::UnityEngine::Rendering::ObsoleteProbeVolumeAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65dab64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ObsoleteProbeVolumeAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ObsoleteProbeVolumeAsset* UnityEngine::Rendering::ObsoleteProbeVolumeAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ObsoleteProbeVolumeAsset::ObsoleteProbeVolumeAsset() {}
