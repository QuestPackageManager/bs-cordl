#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersBatchersContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferGrower_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersBatchersContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugRendererBatcherStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupDataCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenProcessor_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupDataPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommon_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersBatchersContextDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_renderersParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderersParameters (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_renderersParameters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6617f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_renderersParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_gpuInstanceDataBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_gpuInstanceDataBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6617f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_gpuInstanceDataBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_activeLodGroupCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_activeLodGroupCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6617f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_activeLodGroupCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_defaultDescriptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUInstanceComponentDesc> (
    ::UnityEngine::Rendering::RenderersBatchersContext::*)()>(&::UnityEngine::Rendering::RenderersBatchersContext::get_defaultDescriptions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6617f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_defaultDescriptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_defaultMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> (
    ::UnityEngine::Rendering::RenderersBatchersContext::*)()>(&::UnityEngine::Rendering::RenderersBatchersContext::get_defaultMetadata)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6617ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_defaultMetadata", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_lodGroupCullingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> (
    ::UnityEngine::Rendering::RenderersBatchersContext::*)()>(&::UnityEngine::Rendering::RenderersBatchersContext::get_lodGroupCullingData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_lodGroupCullingData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_instanceDataBufferVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_instanceDataBufferVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_instanceDataBufferVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_instanceDataBufferLayoutVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_instanceDataBufferLayoutVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                 "get_instanceDataBufferLayoutVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_crossfadedRendererCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_crossfadedRendererCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_crossfadedRendererCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_cachedAmbientProbe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SphericalHarmonicsL2 (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_cachedAmbientProbe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6618070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_cachedAmbientProbe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_hasBoundingSpheres
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_hasBoundingSpheres)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_hasBoundingSpheres", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_instanceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CPUInstanceData_ReadOnly (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_instanceData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6618098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_instanceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_sharedInstanceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_sharedInstanceData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66180f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_sharedInstanceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_instanceDataBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_instanceDataBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_instanceDataBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_aliveInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> (
    ::UnityEngine::Rendering::RenderersBatchersContext::*)()>(&::UnityEngine::Rendering::RenderersBatchersContext::get_aliveInstances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_aliveInstances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_smallMeshScreenPercentage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_smallMeshScreenPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6618178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_smallMeshScreenPercentage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_resources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUResidentDrawerResources* (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_resources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6618180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_resources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_occlusionCullingCommon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::OcclusionCullingCommon* (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_occlusionCullingCommon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6618188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_occlusionCullingCommon", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.get_debugStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DebugRendererBatcherStats* (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::get_debugStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6618190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "get_debugStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::ByRef<::UnityEngine::Rendering::RenderersBatchersContextDesc>, ::UnityEngine::Rendering::GPUDrivenProcessor*, ::UnityEngine::Rendering::GPUResidentDrawerResources*)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::_ctor)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6618198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersBatchersContextDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::Dispose)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6618b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.GetMaxInstancesOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderersBatchersContext::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::GetMaxInstancesOfType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6618c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GetMaxInstancesOfType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.GetAliveInstancesOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderersBatchersContext::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::GetAliveInstancesOfType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6618ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GetAliveInstancesOfType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.GrowInstanceBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(::ByRef<::UnityEngine::Rendering::InstanceNumInfo>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::GrowInstanceBuffer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6618d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GrowInstanceBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceNumInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.EnsureInstanceBufferCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::EnsureInstanceBufferCapacity)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6618ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "EnsureInstanceBufferCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.UpdateLODGroupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData>)>(&::UnityEngine::Rendering::RenderersBatchersContext::UpdateLODGroupData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6618e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateLODGroupData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.TransformLODGroupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData>)>(&::UnityEngine::Rendering::RenderersBatchersContext::TransformLODGroupData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6618e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "TransformLODGroupData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.DestroyLODGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::DestroyLODGroups)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6618e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "DestroyLODGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.UpdateLODGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::UpdateLODGroups)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6618e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateLODGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.ReallocateAndGetInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::ReallocateAndGetInstances)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6618f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ReallocateAndGetInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.ScheduleUpdateInstanceDataJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::ScheduleUpdateInstanceDataJob)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6618f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleUpdateInstanceDataJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.FreeRendererGroupInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::FreeRendererGroupInstances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "FreeRendererGroupInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.FreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(&::UnityEngine::Rendering::RenderersBatchersContext::FreeInstances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "FreeInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleQueryRendererGroupInstancesJob",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6618fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleQueryRendererGroupInstancesJob",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.ScheduleQueryRendererGroupInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(&::UnityEngine::Rendering::RenderersBatchersContext::ScheduleQueryRendererGroupInstancesJob)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6618ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleQueryRendererGroupInstancesJob",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.ScheduleQueryMeshInstancesJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::ScheduleQueryMeshInstancesJob)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x661900c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleQueryMeshInstancesJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.ChangeInstanceBufferVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::ChangeInstanceBufferVersion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6619024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "ChangeInstanceBufferVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.CreateDataBufferUploader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUInstanceDataBufferUploader (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    int32_t, ::UnityEngine::Rendering::InstanceType)>(&::UnityEngine::Rendering::RenderersBatchersContext::CreateDataBufferUploader)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6619044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "CreateDataBufferUploader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.SubmitToGpu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>, bool)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::SubmitToGpu)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6619080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "SubmitToGpu", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.SubmitToGpu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>, ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>, bool)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::SubmitToGpu)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66190a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "SubmitToGpu", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.InitializeInstanceTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::RenderersBatchersContext::InitializeInstanceTransforms)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66190d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "InitializeInstanceTransforms", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.UpdateInstanceTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::UpdateInstanceTransforms)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x661913c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateInstanceTransforms", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.UpdateAmbientProbeAndGpuBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(bool)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::UpdateAmbientProbeAndGpuBuffer)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x66191a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateAmbientProbeAndGpuBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.UpdateInstanceWindDataHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>)>(&::UnityEngine::Rendering::RenderersBatchersContext::UpdateInstanceWindDataHistory)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66192c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateInstanceWindDataHistory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.UpdateInstanceMotions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::UpdateInstanceMotions)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6619348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "UpdateInstanceMotions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.TransformLODGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::TransformLODGroups)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6619390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "TransformLODGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.UpdatePerFrameInstanceVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(::ByRef<::UnityEngine::Rendering::ParallelBitArray>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::UpdatePerFrameInstanceVisibility)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6619438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdatePerFrameInstanceVisibility",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.ScheduleCollectInstancesLODGroupAndMasksJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<uint32_t>)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::ScheduleCollectInstancesLODGroupAndMasksJob)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6619450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleCollectInstancesLODGroupAndMasksJob",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.GetRendererInstanceHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::InstanceHandle (::UnityEngine::Rendering::RenderersBatchersContext::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderersBatchersContext::GetRendererInstanceHandle)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6619468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GetRendererInstanceHandle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.GetVisibleTreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)(
    ::ByRef<::UnityEngine::Rendering::ParallelBitArray>, ::ByRef<::UnityEngine::Rendering::ParallelBitArray>, ::Unity::Collections::NativeList_1<int32_t>,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>, bool, ::ByRef<int32_t>)>(&::UnityEngine::Rendering::RenderersBatchersContext::GetVisibleTreeInstances)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66195b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GetVisibleTreeInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.GetInstanceDataBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GPUInstanceDataBuffer* (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::GetInstanceDataBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66195d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "GetInstanceDataBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersBatchersContext.UpdateFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersBatchersContext::*)()>(
    &::UnityEngine::Rendering::RenderersBatchersContext::UpdateFrame)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66195dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                               "UpdateFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::InstanceDataSystem*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_InstanceDataSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceDataSystem;
}
constexpr ::UnityEngine::Rendering::InstanceDataSystem* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_InstanceDataSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceDataSystem;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_InstanceDataSystem(::UnityEngine::Rendering::InstanceDataSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstanceDataSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_Resources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_Resources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_Resources(::UnityEngine::Rendering::GPUResidentDrawerResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Resources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_GPUDrivenProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GPUDrivenProcessor;
}
constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_GPUDrivenProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GPUDrivenProcessor;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GPUDrivenProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::LODGroupDataPool*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_LODGroupDataPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODGroupDataPool;
}
constexpr ::UnityEngine::Rendering::LODGroupDataPool* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_LODGroupDataPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LODGroupDataPool;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_LODGroupDataPool(::UnityEngine::Rendering::LODGroupDataPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LODGroupDataPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_InstanceDataBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceDataBuffer;
}
constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_InstanceDataBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceDataBuffer;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_InstanceDataBuffer(::UnityEngine::Rendering::GPUInstanceDataBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstanceDataBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderersParameters& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_RenderersParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderersParameters;
}
constexpr ::UnityEngine::Rendering::RenderersParameters const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_RenderersParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderersParameters;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_RenderersParameters(::UnityEngine::Rendering::RenderersParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderersParameters = value;
}
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_UploadResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UploadResources;
}
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_UploadResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UploadResources;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_UploadResources(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UploadResources = value;
}
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_GrowerResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GrowerResources;
}
constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_GrowerResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GrowerResources;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_GrowerResources(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GrowerResources = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_CmdBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CmdBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_CmdBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CmdBuffer;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_CmdBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CmdBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_CachedAmbientProbe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedAmbientProbe;
}
constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2 const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_CachedAmbientProbe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedAmbientProbe;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_CachedAmbientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedAmbientProbe = value;
}
constexpr float_t& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_SmallMeshScreenPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmallMeshScreenPercentage;
}
constexpr float_t const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_SmallMeshScreenPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SmallMeshScreenPercentage;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_SmallMeshScreenPercentage(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SmallMeshScreenPercentage = value;
}
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_UpdateLODGroupCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateLODGroupCallback;
}
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_UpdateLODGroupCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateLODGroupCallback;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_UpdateLODGroupCallback(::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateLODGroupCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_TransformLODGroupCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformLODGroupCallback;
}
constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_TransformLODGroupCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformLODGroupCallback;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_TransformLODGroupCallback(::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransformLODGroupCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_OcclusionCullingCommon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionCullingCommon;
}
constexpr ::UnityEngine::Rendering::OcclusionCullingCommon* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_OcclusionCullingCommon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionCullingCommon;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_OcclusionCullingCommon(::UnityEngine::Rendering::OcclusionCullingCommon* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OcclusionCullingCommon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::DebugRendererBatcherStats*& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_DebugStats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugStats;
}
constexpr ::UnityEngine::Rendering::DebugRendererBatcherStats* const& UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_get_m_DebugStats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugStats;
}
constexpr void UnityEngine::Rendering::RenderersBatchersContext::__cordl_internal_set_m_DebugStats(::UnityEngine::Rendering::DebugRendererBatcherStats* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugStats)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::RenderersParameters UnityEngine::Rendering::RenderersBatchersContext::get_renderersParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_renderersParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderersParameters, false>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::RenderersBatchersContext::get_gpuInstanceDataBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_gpuInstanceDataBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderersBatchersContext::get_activeLodGroupCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_activeLodGroupCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUInstanceComponentDesc> UnityEngine::Rendering::RenderersBatchersContext::get_defaultDescriptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_defaultDescriptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUInstanceComponentDesc>, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> UnityEngine::Rendering::RenderersBatchersContext::get_defaultMetadata() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_defaultMetadata", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> UnityEngine::Rendering::RenderersBatchersContext::get_lodGroupCullingData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_lodGroupCullingData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderersBatchersContext::get_instanceDataBufferVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_instanceDataBufferVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderersBatchersContext::get_instanceDataBufferLayoutVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                               "get_instanceDataBufferLayoutVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderersBatchersContext::get_crossfadedRendererCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_crossfadedRendererCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::SphericalHarmonicsL2 UnityEngine::Rendering::RenderersBatchersContext::get_cachedAmbientProbe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_cachedAmbientProbe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SphericalHarmonicsL2, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderersBatchersContext::get_hasBoundingSpheres() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_hasBoundingSpheres", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CPUInstanceData_ReadOnly UnityEngine::Rendering::RenderersBatchersContext::get_instanceData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_instanceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUInstanceData_ReadOnly, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly UnityEngine::Rendering::RenderersBatchersContext::get_sharedInstanceData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_sharedInstanceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly UnityEngine::Rendering::RenderersBatchersContext::get_instanceDataBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_instanceDataBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> UnityEngine::Rendering::RenderersBatchersContext::get_aliveInstances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_aliveInstances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::RenderersBatchersContext::get_smallMeshScreenPercentage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_smallMeshScreenPercentage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerResources* UnityEngine::Rendering::RenderersBatchersContext::get_resources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_resources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUResidentDrawerResources*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::OcclusionCullingCommon* UnityEngine::Rendering::RenderersBatchersContext::get_occlusionCullingCommon() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_occlusionCullingCommon", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OcclusionCullingCommon*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugRendererBatcherStats* UnityEngine::Rendering::RenderersBatchersContext::get_debugStats() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "get_debugStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugRendererBatcherStats*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::_ctor(::ByRef<::UnityEngine::Rendering::RenderersBatchersContextDesc> desc,
                                                                    ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor, ::UnityEngine::Rendering::GPUResidentDrawerResources* resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderersBatchersContextDesc>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUDrivenProcessor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::GPUResidentDrawerResources*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc, gpuDrivenProcessor, resources);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderersBatchersContext::GetMaxInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GetMaxInstancesOfType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instanceType);
}
inline int32_t UnityEngine::Rendering::RenderersBatchersContext::GetAliveInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GetAliveInstancesOfType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, instanceType);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::GrowInstanceBuffer(::ByRef<::UnityEngine::Rendering::InstanceNumInfo> instanceNumInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GrowInstanceBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceNumInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceNumInfo);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::EnsureInstanceBufferCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "EnsureInstanceBufferCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::UpdateLODGroupData(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData> lodGroupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateLODGroupData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lodGroupData);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::TransformLODGroupData(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData> lodGroupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "TransformLODGroupData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lodGroupData);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::DestroyLODGroups(::Unity::Collections::NativeArray_1<int32_t> destroyed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "DestroyLODGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destroyed);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::UpdateLODGroups(::Unity::Collections::NativeArray_1<int32_t> changedID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateLODGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, changedID);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::ReallocateAndGetInstances(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ReallocateAndGetInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererData, instances);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::RenderersBatchersContext::ScheduleUpdateInstanceDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                                                ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleUpdateInstanceDataJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, instances, rendererData);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t> rendererGroupsID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "FreeRendererGroupInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererGroupsID);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::FreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "FreeInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::RenderersBatchersContext::ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleQueryRendererGroupInstancesJob",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instances);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::RenderersBatchersContext::ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleQueryRendererGroupInstancesJob",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instances);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::RenderersBatchersContext::ScheduleQueryRendererGroupInstancesJob(
    ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> instancesOffset, ::Unity::Collections::NativeArray_1<int32_t> instancesCount,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleQueryRendererGroupInstancesJob",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroupIDs, instancesOffset, instancesCount, instances);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::RenderersBatchersContext::ScheduleQueryMeshInstancesJob(::Unity::Collections::NativeArray_1<int32_t> sortedMeshIDs,
                                                                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleQueryMeshInstancesJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, sortedMeshIDs, instances);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::ChangeInstanceBufferVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "ChangeInstanceBufferVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GPUInstanceDataBufferUploader UnityEngine::Rendering::RenderersBatchersContext::CreateDataBufferUploader(int32_t capacity,
                                                                                                                                          ::UnityEngine::Rendering::InstanceType instanceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "CreateDataBufferUploader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceDataBufferUploader, false>(this, ___internal_method, capacity, instanceType);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::SubmitToGpu(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                          ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader> uploader, bool submitOnlyWrittenParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "SubmitToGpu", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances, uploader, submitOnlyWrittenParams);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::SubmitToGpu(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices,
                                                                          ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader> uploader, bool submitOnlyWrittenParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "SubmitToGpu", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gpuInstanceIndices, uploader, submitOnlyWrittenParams);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::InitializeInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                                                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "InitializeInstanceTransforms", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances, localToWorldMatrices, prevLocalToWorldMatrices);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::UpdateInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateInstanceTransforms", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances, localToWorldMatrices);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::UpdateAmbientProbeAndGpuBuffer(bool forceUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateAmbientProbeAndGpuBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceUpdate);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::UpdateInstanceWindDataHistory(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdateInstanceWindDataHistory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gpuInstanceIndices);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::UpdateInstanceMotions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "UpdateInstanceMotions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::TransformLODGroups(::Unity::Collections::NativeArray_1<int32_t> lodGroupsID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "TransformLODGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lodGroupsID);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::UpdatePerFrameInstanceVisibility(::ByRef<::UnityEngine::Rendering::ParallelBitArray> compactedVisibilityMasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "UpdatePerFrameInstanceVisibility", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compactedVisibilityMasks);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::RenderersBatchersContext::ScheduleCollectInstancesLODGroupAndMasksJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                                              ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "ScheduleCollectInstancesLODGroupAndMasksJob",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, instances, lodGroupAndMasks);
}
inline ::UnityEngine::Rendering::InstanceHandle UnityEngine::Rendering::RenderersBatchersContext::GetRendererInstanceHandle(int32_t rendererID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GetRendererInstanceHandle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceHandle, false>(this, ___internal_method, rendererID);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::GetVisibleTreeInstances(::ByRef<::UnityEngine::Rendering::ParallelBitArray> compactedVisibilityMasks,
                                                                                      ::ByRef<::UnityEngine::Rendering::ParallelBitArray> processedBits,
                                                                                      ::Unity::Collections::NativeList_1<int32_t> visibeTreeRendererIDs,
                                                                                      ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> visibeTreeInstances,
                                                                                      bool becomeVisibleOnly, ::ByRef<int32_t> becomeVisibeTreeInstancesCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(), "GetVisibleTreeInstances", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ParallelBitArray>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compactedVisibilityMasks, processedBits, visibeTreeRendererIDs, visibeTreeInstances, becomeVisibleOnly,
                                                          becomeVisibeTreeInstancesCount);
}
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* UnityEngine::Rendering::RenderersBatchersContext::GetInstanceDataBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "GetInstanceDataBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceDataBuffer*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderersBatchersContext::UpdateFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersBatchersContext*>::get(),
                                                                             "UpdateFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderersBatchersContext* UnityEngine::Rendering::RenderersBatchersContext::New_ctor(::ByRef<::UnityEngine::Rendering::RenderersBatchersContextDesc> desc,
                                                                                                                      ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor,
                                                                                                                      ::UnityEngine::Rendering::GPUResidentDrawerResources* resources) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderersBatchersContext*>(desc, gpuDrivenProcessor, resources));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderersBatchersContext::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderersBatchersContext::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersBatchersContext::RenderersBatchersContext() {}
