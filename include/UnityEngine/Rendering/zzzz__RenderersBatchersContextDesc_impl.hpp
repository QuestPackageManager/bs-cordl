#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersBatchersContextDesc.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersBatchersContextDesc_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContextDesc.NewDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderersBatchersContextDesc (*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContextDesc::NewDefault)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x667fab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContextDesc>::get(),
                                                                               "NewDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RenderersBatchersContextDesc UnityEngine::Rendering::RenderersBatchersContextDesc::NewDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContextDesc>::get(),
                                                                             "NewDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderersBatchersContextDesc, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "instanceNumInfo", ty: "::UnityEngine::Rendering::InstanceNumInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportDitheringCrossFade", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableBoundingSpheresInstanceData", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "smallMeshScreenPercentage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableCullerDebugStats", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderersBatchersContextDesc::RenderersBatchersContextDesc(::UnityEngine::Rendering::InstanceNumInfo instanceNumInfo, bool supportDitheringCrossFade,
                                                                                               bool enableBoundingSpheresInstanceData, float_t smallMeshScreenPercentage,
                                                                                               bool enableCullerDebugStats) noexcept {
  this->instanceNumInfo = instanceNumInfo;
  this->supportDitheringCrossFade = supportDitheringCrossFade;
  this->enableBoundingSpheresInstanceData = enableBoundingSpheresInstanceData;
  this->smallMeshScreenPercentage = smallMeshScreenPercentage;
  this->enableCullerDebugStats = enableCullerDebugStats;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersBatchersContextDesc::RenderersBatchersContextDesc() {}
