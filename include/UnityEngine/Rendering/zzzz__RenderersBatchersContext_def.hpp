#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersBatchersContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferGrower_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderersBatchersContext)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct CPUInstanceData_ReadOnly;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData_ReadOnly;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
namespace UnityEngine::Rendering {
class GPUDrivenLODGroupDataCallback;
}
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupData;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
namespace UnityEngine::Rendering {
struct GPUInstanceComponentDesc;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferUploader;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBuffer_ReadOnly;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct InstanceNumInfo;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData;
}
namespace UnityEngine::Rendering {
class LODGroupDataPool;
}
namespace UnityEngine::Rendering {
struct MetadataValue;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon;
}
namespace UnityEngine::Rendering {
struct ParallelBitArray;
}
namespace UnityEngine::Rendering {
struct RenderersBatchersContextDesc;
}
namespace UnityEngine::Rendering {
struct RenderersParameters;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderersBatchersContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderersBatchersContext);
// Dependencies System.Object, UnityEngine.Rendering.GPUInstanceDataBufferGrower::GPUResources, UnityEngine.Rendering.GPUInstanceDataBufferUploader::GPUResources,
// UnityEngine.Rendering.RenderersParameters, UnityEngine.Rendering.SphericalHarmonicsL2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderersBatchersContext
class CORDL_TYPE RenderersBatchersContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_activeLodGroupCount)) int32_t activeLodGroupCount;

  __declspec(property(get = get_aliveInstances)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> aliveInstances;

  __declspec(property(get = get_cachedAmbientProbe)) ::UnityEngine::Rendering::SphericalHarmonicsL2 cachedAmbientProbe;

  __declspec(property(get = get_crossfadedRendererCount)) int32_t crossfadedRendererCount;

  __declspec(property(get = get_debugStats)) ::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats;

  __declspec(property(get = get_defaultDescriptions)) ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUInstanceComponentDesc> defaultDescriptions;

  __declspec(property(get = get_defaultMetadata)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> defaultMetadata;

  __declspec(property(get = get_gpuInstanceDataBuffer)) ::UnityEngine::GraphicsBuffer* gpuInstanceDataBuffer;

  __declspec(property(get = get_hasBoundingSpheres)) bool hasBoundingSpheres;

  __declspec(property(get = get_instanceData)) ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData;

  __declspec(property(get = get_instanceDataBuffer)) ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly instanceDataBuffer;

  __declspec(property(get = get_instanceDataBufferLayoutVersion)) int32_t instanceDataBufferLayoutVersion;

  __declspec(property(get = get_instanceDataBufferVersion)) int32_t instanceDataBufferVersion;

  __declspec(property(get = get_lodGroupCullingData)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData;

  /// @brief Field m_CachedAmbientProbe, offset 0xf8, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_CachedAmbientProbe, put = __cordl_internal_set_m_CachedAmbientProbe)) ::UnityEngine::Rendering::SphericalHarmonicsL2 m_CachedAmbientProbe;

  /// @brief Field m_CmdBuffer, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CmdBuffer, put = __cordl_internal_set_m_CmdBuffer)) ::UnityEngine::Rendering::CommandBuffer* m_CmdBuffer;

  /// @brief Field m_DebugStats, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugStats, put = __cordl_internal_set_m_DebugStats)) ::UnityEngine::Rendering::DebugRendererBatcherStats* m_DebugStats;

  /// @brief Field m_GPUDrivenProcessor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GPUDrivenProcessor, put = __cordl_internal_set_m_GPUDrivenProcessor)) ::UnityEngine::Rendering::GPUDrivenProcessor* m_GPUDrivenProcessor;

  /// @brief Field m_GrowerResources, offset 0xe0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_GrowerResources, put = __cordl_internal_set_m_GrowerResources)) ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources m_GrowerResources;

  /// @brief Field m_InstanceDataBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceDataBuffer, put = __cordl_internal_set_m_InstanceDataBuffer)) ::UnityEngine::Rendering::GPUInstanceDataBuffer* m_InstanceDataBuffer;

  /// @brief Field m_InstanceDataSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceDataSystem, put = __cordl_internal_set_m_InstanceDataSystem)) ::UnityEngine::Rendering::InstanceDataSystem* m_InstanceDataSystem;

  /// @brief Field m_LODGroupDataPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LODGroupDataPool, put = __cordl_internal_set_m_LODGroupDataPool)) ::UnityEngine::Rendering::LODGroupDataPool* m_LODGroupDataPool;

  /// @brief Field m_OcclusionCullingCommon, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OcclusionCullingCommon,
                      put = __cordl_internal_set_m_OcclusionCullingCommon)) ::UnityEngine::Rendering::OcclusionCullingCommon* m_OcclusionCullingCommon;

  /// @brief Field m_RenderersParameters, offset 0x38, size 0x68
  __declspec(property(get = __cordl_internal_get_m_RenderersParameters, put = __cordl_internal_set_m_RenderersParameters)) ::UnityEngine::Rendering::RenderersParameters m_RenderersParameters;

  /// @brief Field m_Resources, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resources, put = __cordl_internal_set_m_Resources)) ::UnityEngine::Rendering::GPUResidentDrawerResources* m_Resources;

  /// @brief Field m_SmallMeshScreenPercentage, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SmallMeshScreenPercentage, put = __cordl_internal_set_m_SmallMeshScreenPercentage)) float_t m_SmallMeshScreenPercentage;

  /// @brief Field m_TransformLODGroupCallback, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformLODGroupCallback,
                      put = __cordl_internal_set_m_TransformLODGroupCallback)) ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* m_TransformLODGroupCallback;

  /// @brief Field m_UpdateLODGroupCallback, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateLODGroupCallback,
                      put = __cordl_internal_set_m_UpdateLODGroupCallback)) ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* m_UpdateLODGroupCallback;

  /// @brief Field m_UploadResources, offset 0xa0, size 0x40
  __declspec(property(get = __cordl_internal_get_m_UploadResources,
                      put = __cordl_internal_set_m_UploadResources)) ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources m_UploadResources;

  __declspec(property(get = get_occlusionCullingCommon)) ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon;

  __declspec(property(get = get_renderersParameters)) ::UnityEngine::Rendering::RenderersParameters renderersParameters;

  __declspec(property(get = get_resources)) ::UnityEngine::Rendering::GPUResidentDrawerResources* resources;

  __declspec(property(get = get_sharedInstanceData)) ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly sharedInstanceData;

  __declspec(property(get = get_smallMeshScreenPercentage)) float_t smallMeshScreenPercentage;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ChangeInstanceBufferVersion, addr 0x6680bb0, size 0x20, virtual false, abstract: false, final false
  inline void ChangeInstanceBufferVersion();

  /// @brief Method CreateDataBufferUploader, addr 0x6680bd0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBufferUploader CreateDataBufferUploader(int32_t capacity, ::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method DestroyLODGroups, addr 0x6680a08, size 0x1c, virtual false, abstract: false, final false
  inline void DestroyLODGroups(::Unity::Collections::NativeArray_1<int32_t> destroyed);

  /// @brief Method Dispose, addr 0x66806e8, size 0x13c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnsureInstanceBufferCapacity, addr 0x6680968, size 0x78, virtual false, abstract: false, final false
  inline void EnsureInstanceBufferCapacity();

  /// @brief Method FreeInstances, addr 0x6680b34, size 0x18, virtual false, abstract: false, final false
  inline void FreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method FreeRendererGroupInstances, addr 0x6680b1c, size 0x18, virtual false, abstract: false, final false
  inline void FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t> rendererGroupsID);

  /// @brief Method GetAliveInstancesOfType, addr 0x6680858, size 0x34, virtual false, abstract: false, final false
  inline int32_t GetAliveInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method GetInstanceDataBuffer, addr 0x6681160, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* GetInstanceDataBuffer();

  /// @brief Method GetMaxInstancesOfType, addr 0x6680824, size 0x34, virtual false, abstract: false, final false
  inline int32_t GetMaxInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method GetRendererInstanceHandle, addr 0x6680ff4, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceHandle GetRendererInstanceHandle(int32_t rendererID);

  /// @brief Method GetVisibleTreeInstances, addr 0x6681144, size 0x1c, virtual false, abstract: false, final false
  inline void GetVisibleTreeInstances(::ByRef<::UnityEngine::Rendering::ParallelBitArray> compactedVisibilityMasks, ::ByRef<::UnityEngine::Rendering::ParallelBitArray> processedBits,
                                      ::Unity::Collections::NativeList_1<int32_t> visibeTreeRendererIDs,
                                      ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> visibeTreeInstances, bool becomeVisibleOnly,
                                      ::ByRef<int32_t> becomeVisibeTreeInstancesCount);

  /// @brief Method GrowInstanceBuffer, addr 0x668088c, size 0xdc, virtual false, abstract: false, final false
  inline void GrowInstanceBuffer(::ByRef<::UnityEngine::Rendering::InstanceNumInfo> instanceNumInfo);

  /// @brief Method InitializeInstanceTransforms, addr 0x6680c5c, size 0x6c, virtual false, abstract: false, final false
  inline void InitializeInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices);

  static inline ::UnityEngine::Rendering::RenderersBatchersContext* New_ctor(::ByRef<::UnityEngine::Rendering::RenderersBatchersContextDesc> desc,
                                                                             ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor,
                                                                             ::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Method ReallocateAndGetInstances, addr 0x6680acc, size 0x28, virtual false, abstract: false, final false
  inline void ReallocateAndGetInstances(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleCollectInstancesLODGroupAndMasksJob, addr 0x6680fdc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleCollectInstancesLODGroupAndMasksJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                              ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks);

  /// @brief Method ScheduleQueryMeshInstancesJob, addr 0x6680b98, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryMeshInstancesJob(::Unity::Collections::NativeArray_1<int32_t> sortedMeshIDs,
                                                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x6680b4c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x6680b64, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x6680b7c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> instancesOffset,
                                                                         ::Unity::Collections::NativeArray_1<int32_t> instancesCount,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleUpdateInstanceDataJob, addr 0x6680af4, size 0x28, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleUpdateInstanceDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData);

  /// @brief Method SubmitToGpu, addr 0x6680c34, size 0x28, virtual false, abstract: false, final false
  inline void SubmitToGpu(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices, ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader> uploader,
                          bool submitOnlyWrittenParams);

  /// @brief Method SubmitToGpu, addr 0x6680c0c, size 0x28, virtual false, abstract: false, final false
  inline void SubmitToGpu(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBufferUploader> uploader,
                          bool submitOnlyWrittenParams);

  /// @brief Method TransformLODGroupData, addr 0x66809f4, size 0x14, virtual false, abstract: false, final false
  inline void TransformLODGroupData(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData> lodGroupData);

  /// @brief Method TransformLODGroups, addr 0x6680f1c, size 0xa8, virtual false, abstract: false, final false
  inline void TransformLODGroups(::Unity::Collections::NativeArray_1<int32_t> lodGroupsID);

  /// @brief Method UpdateAmbientProbeAndGpuBuffer, addr 0x6680d30, size 0x124, virtual false, abstract: false, final false
  inline void UpdateAmbientProbeAndGpuBuffer(bool forceUpdate);

  /// @brief Method UpdateFrame, addr 0x6681168, size 0x38, virtual false, abstract: false, final false
  inline void UpdateFrame();

  /// @brief Method UpdateInstanceMotions, addr 0x6680ed4, size 0x48, virtual false, abstract: false, final false
  inline void UpdateInstanceMotions();

  /// @brief Method UpdateInstanceTransforms, addr 0x6680cc8, size 0x68, virtual false, abstract: false, final false
  inline void UpdateInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices);

  /// @brief Method UpdateInstanceWindDataHistory, addr 0x6680e54, size 0x80, virtual false, abstract: false, final false
  inline void UpdateInstanceWindDataHistory(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices);

  /// @brief Method UpdateLODGroupData, addr 0x66809e0, size 0x14, virtual false, abstract: false, final false
  inline void UpdateLODGroupData(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData> lodGroupData);

  /// @brief Method UpdateLODGroups, addr 0x6680a24, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateLODGroups(::Unity::Collections::NativeArray_1<int32_t> changedID);

  /// @brief Method UpdatePerFrameInstanceVisibility, addr 0x6680fc4, size 0x18, virtual false, abstract: false, final false
  inline void UpdatePerFrameInstanceVisibility(::ByRef<::UnityEngine::Rendering::ParallelBitArray> compactedVisibilityMasks);

  constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2 const& __cordl_internal_get_m_CachedAmbientProbe() const;

  constexpr ::UnityEngine::Rendering::SphericalHarmonicsL2& __cordl_internal_get_m_CachedAmbientProbe();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_CmdBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_CmdBuffer();

  constexpr ::UnityEngine::Rendering::DebugRendererBatcherStats* const& __cordl_internal_get_m_DebugStats() const;

  constexpr ::UnityEngine::Rendering::DebugRendererBatcherStats*& __cordl_internal_get_m_DebugStats();

  constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& __cordl_internal_get_m_GPUDrivenProcessor() const;

  constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& __cordl_internal_get_m_GPUDrivenProcessor();

  constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources const& __cordl_internal_get_m_GrowerResources() const;

  constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources& __cordl_internal_get_m_GrowerResources();

  constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer* const& __cordl_internal_get_m_InstanceDataBuffer() const;

  constexpr ::UnityEngine::Rendering::GPUInstanceDataBuffer*& __cordl_internal_get_m_InstanceDataBuffer();

  constexpr ::UnityEngine::Rendering::InstanceDataSystem* const& __cordl_internal_get_m_InstanceDataSystem() const;

  constexpr ::UnityEngine::Rendering::InstanceDataSystem*& __cordl_internal_get_m_InstanceDataSystem();

  constexpr ::UnityEngine::Rendering::LODGroupDataPool* const& __cordl_internal_get_m_LODGroupDataPool() const;

  constexpr ::UnityEngine::Rendering::LODGroupDataPool*& __cordl_internal_get_m_LODGroupDataPool();

  constexpr ::UnityEngine::Rendering::OcclusionCullingCommon* const& __cordl_internal_get_m_OcclusionCullingCommon() const;

  constexpr ::UnityEngine::Rendering::OcclusionCullingCommon*& __cordl_internal_get_m_OcclusionCullingCommon();

  constexpr ::UnityEngine::Rendering::RenderersParameters const& __cordl_internal_get_m_RenderersParameters() const;

  constexpr ::UnityEngine::Rendering::RenderersParameters& __cordl_internal_get_m_RenderersParameters();

  constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources* const& __cordl_internal_get_m_Resources() const;

  constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources*& __cordl_internal_get_m_Resources();

  constexpr float_t const& __cordl_internal_get_m_SmallMeshScreenPercentage() const;

  constexpr float_t& __cordl_internal_get_m_SmallMeshScreenPercentage();

  constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* const& __cordl_internal_get_m_TransformLODGroupCallback() const;

  constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*& __cordl_internal_get_m_TransformLODGroupCallback();

  constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* const& __cordl_internal_get_m_UpdateLODGroupCallback() const;

  constexpr ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*& __cordl_internal_get_m_UpdateLODGroupCallback();

  constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources const& __cordl_internal_get_m_UploadResources() const;

  constexpr ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources& __cordl_internal_get_m_UploadResources();

  constexpr void __cordl_internal_set_m_CachedAmbientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2 value);

  constexpr void __cordl_internal_set_m_CmdBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_DebugStats(::UnityEngine::Rendering::DebugRendererBatcherStats* value);

  constexpr void __cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor* value);

  constexpr void __cordl_internal_set_m_GrowerResources(::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources value);

  constexpr void __cordl_internal_set_m_InstanceDataBuffer(::UnityEngine::Rendering::GPUInstanceDataBuffer* value);

  constexpr void __cordl_internal_set_m_InstanceDataSystem(::UnityEngine::Rendering::InstanceDataSystem* value);

  constexpr void __cordl_internal_set_m_LODGroupDataPool(::UnityEngine::Rendering::LODGroupDataPool* value);

  constexpr void __cordl_internal_set_m_OcclusionCullingCommon(::UnityEngine::Rendering::OcclusionCullingCommon* value);

  constexpr void __cordl_internal_set_m_RenderersParameters(::UnityEngine::Rendering::RenderersParameters value);

  constexpr void __cordl_internal_set_m_Resources(::UnityEngine::Rendering::GPUResidentDrawerResources* value);

  constexpr void __cordl_internal_set_m_SmallMeshScreenPercentage(float_t value);

  constexpr void __cordl_internal_set_m_TransformLODGroupCallback(::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* value);

  constexpr void __cordl_internal_set_m_UpdateLODGroupCallback(::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* value);

  constexpr void __cordl_internal_set_m_UploadResources(::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources value);

  /// @brief Method .ctor, addr 0x667fd24, size 0x360, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::RenderersBatchersContextDesc> desc, ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor,
                    ::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Method get_activeLodGroupCount, addr 0x667faf8, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_activeLodGroupCount();

  /// @brief Method get_aliveInstances, addr 0x667fcec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> get_aliveInstances();

  /// @brief Method get_cachedAmbientProbe, addr 0x667fbfc, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SphericalHarmonicsL2 get_cachedAmbientProbe();

  /// @brief Method get_crossfadedRendererCount, addr 0x667fbe4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_crossfadedRendererCount();

  /// @brief Method get_debugStats, addr 0x667fd1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugRendererBatcherStats* get_debugStats();

  /// @brief Method get_defaultDescriptions, addr 0x667fb0c, size 0x78, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUInstanceComponentDesc> get_defaultDescriptions();

  /// @brief Method get_defaultMetadata, addr 0x667fb84, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> get_defaultMetadata();

  /// @brief Method get_gpuInstanceDataBuffer, addr 0x667fae0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_gpuInstanceDataBuffer();

  /// @brief Method get_hasBoundingSpheres, addr 0x667fc0c, size 0x18, virtual false, abstract: false, final false
  inline bool get_hasBoundingSpheres();

  /// @brief Method get_instanceData, addr 0x667fc24, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUInstanceData_ReadOnly get_instanceData();

  /// @brief Method get_instanceDataBuffer, addr 0x667fcd4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly get_instanceDataBuffer();

  /// @brief Method get_instanceDataBufferLayoutVersion, addr 0x667fbcc, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_instanceDataBufferLayoutVersion();

  /// @brief Method get_instanceDataBufferVersion, addr 0x667fbb4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_instanceDataBufferVersion();

  /// @brief Method get_lodGroupCullingData, addr 0x667fb9c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> get_lodGroupCullingData();

  /// @brief Method get_occlusionCullingCommon, addr 0x667fd14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OcclusionCullingCommon* get_occlusionCullingCommon();

  /// @brief Method get_renderersParameters, addr 0x667fad0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderersParameters get_renderersParameters();

  /// @brief Method get_resources, addr 0x667fd0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUResidentDrawerResources* get_resources();

  /// @brief Method get_sharedInstanceData, addr 0x667fc7c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly get_sharedInstanceData();

  /// @brief Method get_smallMeshScreenPercentage, addr 0x667fd04, size 0x8, virtual false, abstract: false, final false
  inline float_t get_smallMeshScreenPercentage();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderersBatchersContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderersBatchersContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderersBatchersContext(RenderersBatchersContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderersBatchersContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderersBatchersContext(RenderersBatchersContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17760 };

  /// @brief Field m_InstanceDataSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::InstanceDataSystem* ___m_InstanceDataSystem;

  /// @brief Field m_Resources, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUResidentDrawerResources* ___m_Resources;

  /// @brief Field m_GPUDrivenProcessor, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenProcessor* ___m_GPUDrivenProcessor;

  /// @brief Field m_LODGroupDataPool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::LODGroupDataPool* ___m_LODGroupDataPool;

  /// @brief Field m_InstanceDataBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUInstanceDataBuffer* ___m_InstanceDataBuffer;

  /// @brief Field m_RenderersParameters, offset: 0x38, size: 0x68, def value: None
  ::UnityEngine::Rendering::RenderersParameters ___m_RenderersParameters;

  /// @brief Field m_UploadResources, offset: 0xa0, size: 0x40, def value: None
  ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources ___m_UploadResources;

  /// @brief Field m_GrowerResources, offset: 0xe0, size: 0x10, def value: None
  ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources ___m_GrowerResources;

  /// @brief Field m_CmdBuffer, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_CmdBuffer;

  /// @brief Field m_CachedAmbientProbe, offset: 0xf8, size: 0x6c, def value: None
  ::UnityEngine::Rendering::SphericalHarmonicsL2 ___m_CachedAmbientProbe;

  /// @brief Field m_SmallMeshScreenPercentage, offset: 0x164, size: 0x4, def value: None
  float_t ___m_SmallMeshScreenPercentage;

  /// @brief Field m_UpdateLODGroupCallback, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* ___m_UpdateLODGroupCallback;

  /// @brief Field m_TransformLODGroupCallback, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* ___m_TransformLODGroupCallback;

  /// @brief Field m_OcclusionCullingCommon, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::Rendering::OcclusionCullingCommon* ___m_OcclusionCullingCommon;

  /// @brief Field m_DebugStats, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugRendererBatcherStats* ___m_DebugStats;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_InstanceDataSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_Resources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_GPUDrivenProcessor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_LODGroupDataPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_InstanceDataBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_RenderersParameters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_UploadResources) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_GrowerResources) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_CmdBuffer) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_CachedAmbientProbe) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_SmallMeshScreenPercentage) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_UpdateLODGroupCallback) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_TransformLODGroupCallback) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_OcclusionCullingCommon) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_DebugStats) == 0x180, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderersBatchersContext, 0x188>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderersBatchersContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderersBatchersContext*, "UnityEngine.Rendering", "RenderersBatchersContext");
