#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShadowCulling.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCulling_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPLightShadowCullingInfos_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastersCullingInfos_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCulling.CullShadowCasters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> (*)(
    ::ByRef<::UnityEngine::Rendering::ScriptableRenderContext>, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
    ::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>, ::ByRef<::UnityEngine::Rendering::CullingResults>)>(
    &::UnityEngine::Rendering::Universal::ShadowCulling::CullShadowCasters)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x669b190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCulling*>::get(), "CullShadowCasters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCulling.ComputeShadowCasterCullingInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::Universal::UniversalShadowData*, ::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>, ::ByRef<::UnityEngine::Rendering::CullingResults>,
    ::ByRef<::UnityEngine::Rendering::ShadowCastersCullingInfos>, ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>)>(
    &::UnityEngine::Rendering::Universal::ShadowCulling::ComputeShadowCasterCullingInfos)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x669b274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCulling*>::get(), "ComputeShadowCasterCullingInfos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ShadowCastersCullingInfos>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCulling.GetCullingProjectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::BatchCullingProjectionType (*)(::UnityEngine::LightType)>(
    &::UnityEngine::Rendering::Universal::ShadowCulling::GetCullingProjectionType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x669befc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCulling*>::get(), "GetCullingProjectionType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightType>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowCulling::setStaticF_computeShadowCasterCullingInfosMarker(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "computeShadowCasterCullingInfosMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCulling*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ShadowCulling::getStaticF_computeShadowCasterCullingInfosMarker() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "computeShadowCasterCullingInfosMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCulling*>::get>();
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> UnityEngine::Rendering::Universal::ShadowCulling::CullShadowCasters(
    ::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
    ::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> shadowAtlasLayout, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCulling*>::get(), "CullShadowCasters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ScriptableRenderContext>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>, false>(nullptr, ___internal_method, context,
                                                                                                                                                          shadowData, shadowAtlasLayout, cullResults);
}
inline void UnityEngine::Rendering::Universal::ShadowCulling::ComputeShadowCasterCullingInfos(
    ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, ::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> shadowAtlasLayout,
    ::ByRef<::UnityEngine::Rendering::CullingResults> cullingResults, ::ByRef<::UnityEngine::Rendering::ShadowCastersCullingInfos> shadowCullingInfos,
    ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>> urpVisibleLightsShadowCullingInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCulling*>::get(), "ComputeShadowCasterCullingInfos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ShadowCastersCullingInfos>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shadowData, shadowAtlasLayout, cullingResults, shadowCullingInfos, urpVisibleLightsShadowCullingInfos);
}
inline ::UnityEngine::Rendering::BatchCullingProjectionType UnityEngine::Rendering::Universal::ShadowCulling::GetCullingProjectionType(::UnityEngine::LightType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCulling*>::get(), "GetCullingProjectionType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchCullingProjectionType, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowCulling::ShadowCulling() {}
