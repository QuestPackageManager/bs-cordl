#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ShadowCulling.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> (*)(
    ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
    ::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>, ::by_ref<::UnityEngine::Rendering::CullingResults>)>(
    &::UnityEngine::Rendering::Universal::ShadowCulling::CullShadowCasters)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68bb0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowCulling*>(),
                                         { "CullShadowCasters",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCulling.ComputeShadowCasterCullingInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::Universal::UniversalShadowData*, ::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>, ::by_ref<::UnityEngine::Rendering::CullingResults>,
    ::by_ref<::UnityEngine::Rendering::ShadowCastersCullingInfos>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>)>(
    &::UnityEngine::Rendering::Universal::ShadowCulling::ComputeShadowCasterCullingInfos)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x68bb1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowCulling*>(),
                                         { "ComputeShadowCasterCullingInfos",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowCastersCullingInfos>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCulling.GetCullingProjectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchCullingProjectionType (*)(::UnityEngine::LightType)>(
    &::UnityEngine::Rendering::Universal::ShadowCulling::GetCullingProjectionType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68bbe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowCulling*>(), { "GetCullingProjectionType", {}, { ::i2c::type_of<::UnityEngine::LightType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowCulling::setStaticF_computeShadowCasterCullingInfosMarker(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "computeShadowCasterCullingInfosMarker", ::UnityEngine::Rendering::Universal::ShadowCulling*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ShadowCulling::getStaticF_computeShadowCasterCullingInfosMarker() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "computeShadowCasterCullingInfosMarker", ::UnityEngine::Rendering::Universal::ShadowCulling*>();
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> UnityEngine::Rendering::Universal::ShadowCulling::CullShadowCasters(
    ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> context, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
    ::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> shadowAtlasLayout, ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowCulling*>(),
                                       { "CullShadowCasters",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>(nullptr, ___internal_method, context, shadowData,
                                                                                                                                                   shadowAtlasLayout, cullResults);
}
inline void UnityEngine::Rendering::Universal::ShadowCulling::ComputeShadowCasterCullingInfos(
    ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, ::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> shadowAtlasLayout,
    ::by_ref<::UnityEngine::Rendering::CullingResults> cullingResults, ::by_ref<::UnityEngine::Rendering::ShadowCastersCullingInfos> shadowCullingInfos,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>> urpVisibleLightsShadowCullingInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowCulling*>(),
                                              { "ComputeShadowCasterCullingInfos",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowCastersCullingInfos>>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shadowData, shadowAtlasLayout, cullingResults, shadowCullingInfos, urpVisibleLightsShadowCullingInfos);
}
inline ::UnityEngine::Rendering::BatchCullingProjectionType UnityEngine::Rendering::Universal::ShadowCulling::GetCullingProjectionType(::UnityEngine::LightType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowCulling*>(), { "GetCullingProjectionType", {}, { ::i2c::type_of<::UnityEngine::LightType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchCullingProjectionType>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowCulling::ShadowCulling() {}
