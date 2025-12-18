#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingJob.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float3x3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingJob_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CullingJob_CrossFadeType::CullingJob_CrossFadeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CullingJob_CrossFadeType::CullingJob_CrossFadeType() {}
constexpr ::UnityEngine::Rendering::CullingJob_CrossFadeType UnityEngine::Rendering::CullingJob_CrossFadeType::kDisabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::CullingJob_CrossFadeType UnityEngine::Rendering::CullingJob_CrossFadeType::kCrossFadeOut{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::CullingJob_CrossFadeType UnityEngine::Rendering::CullingJob_CrossFadeType::kCrossFadeIn{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::CullingJob_CrossFadeType UnityEngine::Rendering::CullingJob_CrossFadeType::kVisible{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Rendering::CullingJob.PackFloatToUint8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(float_t)>(&::UnityEngine::Rendering::CullingJob::PackFloatToUint8)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x665fb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CullingJob>::get(), "PackFloatToUint8", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingJob.CalculateLODVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::CullingJob::*)(int32_t, int32_t, ::UnityEngine::Rendering::InstanceFlags)>(
    &::UnityEngine::Rendering::CullingJob::CalculateLODVisibility)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x665fbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CullingJob>::get(), "CalculateLODVisibility", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingJob.CalculateVisibilityMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Rendering::CullingJob::*)(int32_t, int32_t, ::UnityEngine::Rendering::InstanceFlags)>(
    &::UnityEngine::Rendering::CullingJob::CalculateVisibilityMask)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6660084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CullingJob>::get(), "CalculateVisibilityMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CullingJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CullingJob::*)(int32_t)>(&::UnityEngine::Rendering::CullingJob::Execute)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6660280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CullingJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::CullingJob::PackFloatToUint8(float_t percent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CullingJob>::get(), "PackFloatToUint8",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, percent);
}
inline float_t UnityEngine::Rendering::CullingJob::CalculateLODVisibility(int32_t instanceIndex, int32_t sharedInstanceIndex, ::UnityEngine::Rendering::InstanceFlags instanceFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CullingJob>::get(), "CalculateLODVisibility", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, instanceIndex, sharedInstanceIndex, instanceFlags);
}
inline uint32_t UnityEngine::Rendering::CullingJob::CalculateVisibilityMask(int32_t instanceIndex, int32_t sharedInstanceIndex, ::UnityEngine::Rendering::InstanceFlags instanceFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CullingJob>::get(), "CalculateVisibilityMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, instanceIndex, sharedInstanceIndex, instanceFlags);
}
inline void UnityEngine::Rendering::CullingJob::Execute(int32_t instanceIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CullingJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::CullingJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::CullingJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "binningConfig", ty: "::UnityEngine::Rendering::BinningConfig", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewType", ty:
// "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "sqrScreenRelativeMetric", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minScreenRelativeHeight", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "isOrtho", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullLightmappedShadowCasters", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "maxLOD", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "frustumPlanePackets", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "frustumSplitInfos", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightFacingFrustumPlanes", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverSplitInfos", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldToLightSpaceRotation", ty:
// "::Unity::Mathematics::float3x3", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupCullingData",
// ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionBuffer", ty: "::System::IntPtr",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rendererCrossFadeValues", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CullingJob::CullingJob(
    ::UnityEngine::Rendering::BinningConfig binningConfig, ::UnityEngine::Rendering::BatchCullingViewType viewType, ::Unity::Mathematics::float3 cameraPosition, float_t sqrScreenRelativeMetric,
    float_t minScreenRelativeHeight, bool isOrtho, bool cullLightmappedShadowCasters, int32_t maxLOD, uint32_t cullingLayerMask, uint64_t sceneCullingMask,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4> frustumPlanePackets,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo> frustumSplitInfos, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> lightFacingFrustumPlanes,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo> receiverSplitInfos, ::Unity::Mathematics::float3x3 worldToLightSpaceRotation,
    ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly sharedInstanceData,
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData, ::System::IntPtr occlusionBuffer,
    ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t> rendererCrossFadeValues) noexcept {
  this->binningConfig = binningConfig;
  this->viewType = viewType;
  this->cameraPosition = cameraPosition;
  this->sqrScreenRelativeMetric = sqrScreenRelativeMetric;
  this->minScreenRelativeHeight = minScreenRelativeHeight;
  this->isOrtho = isOrtho;
  this->cullLightmappedShadowCasters = cullLightmappedShadowCasters;
  this->maxLOD = maxLOD;
  this->cullingLayerMask = cullingLayerMask;
  this->sceneCullingMask = sceneCullingMask;
  this->frustumPlanePackets = frustumPlanePackets;
  this->frustumSplitInfos = frustumSplitInfos;
  this->lightFacingFrustumPlanes = lightFacingFrustumPlanes;
  this->receiverSplitInfos = receiverSplitInfos;
  this->worldToLightSpaceRotation = worldToLightSpaceRotation;
  this->instanceData = instanceData;
  this->sharedInstanceData = sharedInstanceData;
  this->lodGroupCullingData = lodGroupCullingData;
  this->occlusionBuffer = occlusionBuffer;
  this->rendererVisibilityMasks = rendererVisibilityMasks;
  this->rendererCrossFadeValues = rendererCrossFadeValues;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CullingJob::CullingJob() {}
