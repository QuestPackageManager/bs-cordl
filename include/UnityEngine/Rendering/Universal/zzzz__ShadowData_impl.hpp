#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShadowData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPLightShadowCullingInfos_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowData::*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::ShadowData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c5a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_universalShadowData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::UniversalShadowData* (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_universalShadowData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66c5a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_universalShadowData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_supportsMainLightShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_supportsMainLightShadows)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_supportsMainLightShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_mainLightShadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowmapWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowmapWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_mainLightShadowmapWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowmapHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowmapHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_mainLightShadowmapHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowCascadesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadesCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_mainLightShadowCascadesCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowCascadesSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Vector3> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadesSplit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_mainLightShadowCascadesSplit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowCascadeBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<float_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadeBorder)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_mainLightShadowCascadeBorder",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_supportsAdditionalLightShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_supportsAdditionalLightShadows)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_supportsAdditionalLightShadows",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_additionalLightShadowsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_additionalLightShadowsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_additionalLightShadowsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_additionalLightsShadowmapWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_additionalLightsShadowmapWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_additionalLightsShadowmapWidth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_additionalLightsShadowmapHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_additionalLightsShadowmapHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_additionalLightsShadowmapHeight",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_supportsSoftShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_supportsSoftShadows)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_supportsSoftShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_shadowmapDepthBufferBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_shadowmapDepthBufferBits)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_shadowmapDepthBufferBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_bias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> (
    ::UnityEngine::Rendering::Universal::ShadowData::*)()>(&::UnityEngine::Rendering::Universal::ShadowData::get_bias)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_bias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_resolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::System::Collections::Generic::List_1<int32_t>*> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_resolution)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_resolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_isKeywordAdditionalLightShadowsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_isKeywordAdditionalLightShadowsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c6050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                 "get_isKeywordAdditionalLightShadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_isKeywordSoftShadowsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_isKeywordSoftShadowsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c60b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_isKeywordSoftShadowsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowResolution)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c6110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_mainLightShadowResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightRenderTargetWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightRenderTargetWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c6170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_mainLightRenderTargetWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightRenderTargetHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightRenderTargetHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c61d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_mainLightRenderTargetHeight",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_visibleLightsShadowCullingInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>> (
    ::UnityEngine::Rendering::Universal::ShadowData::*)()>(&::UnityEngine::Rendering::Universal::ShadowData::get_visibleLightsShadowCullingInfos)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c6230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_visibleLightsShadowCullingInfos",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_shadowAtlasLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> (
    ::UnityEngine::Rendering::Universal::ShadowData::*)()>(&::UnityEngine::Rendering::Universal::ShadowData::get_shadowAtlasLayout)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c6290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                               "get_shadowAtlasLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowData::_ctor(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalShadowData* UnityEngine::Rendering::Universal::ShadowData::get_universalShadowData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_universalShadowData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalShadowData*, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::ShadowData::get_supportsMainLightShadows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_supportsMainLightShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightShadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowmapWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightShadowmapWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowmapHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightShadowmapHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightShadowCascadesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Vector3> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadesSplit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightShadowCascadesSplit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Vector3>, false>(this, ___internal_method);
}
inline ::ByRef<float_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadeBorder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightShadowCascadeBorder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<float_t>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::ShadowData::get_supportsAdditionalLightShadows() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_supportsAdditionalLightShadows",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::ShadowData::get_additionalLightShadowsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_additionalLightShadowsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_additionalLightsShadowmapWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_additionalLightsShadowmapWidth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_additionalLightsShadowmapHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_additionalLightsShadowmapHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::ShadowData::get_supportsSoftShadows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_supportsSoftShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_shadowmapDepthBufferBits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_shadowmapDepthBufferBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> UnityEngine::Rendering::Universal::ShadowData::get_bias() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_bias",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>, false>(this, ___internal_method);
}
inline ::ByRef<::System::Collections::Generic::List_1<int32_t>*> UnityEngine::Rendering::Universal::ShadowData::get_resolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_resolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::System::Collections::Generic::List_1<int32_t>*>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::ShadowData::get_isKeywordAdditionalLightShadowsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                               "get_isKeywordAdditionalLightShadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::ShadowData::get_isKeywordSoftShadowsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_isKeywordSoftShadowsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowResolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightShadowResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightRenderTargetWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightRenderTargetWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightRenderTargetHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_mainLightRenderTargetHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>
UnityEngine::Rendering::Universal::ShadowData::get_visibleLightsShadowCullingInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(), "get_visibleLightsShadowCullingInfos",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> UnityEngine::Rendering::Universal::ShadowData::get_shadowAtlasLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowData>::get(),
                                                                             "get_shadowAtlasLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShadowData::ShadowData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept {
  this->frameData = frameData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowData::ShadowData() {}
