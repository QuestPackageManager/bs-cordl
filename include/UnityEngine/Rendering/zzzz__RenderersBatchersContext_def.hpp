#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersBatchersContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
struct CPUPerCameraInstanceData;
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
struct EntityId;
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
MARK_REF_T(::UnityEngine::Rendering::RenderersBatchersContext*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderersBatchersContext*, "UnityEngine.Rendering", "RenderersBatchersContext");
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

  __declspec(property(get = get_cameraCount)) int32_t cameraCount;

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

  /// @brief Field m_CachedAmbientProbe, offset 0x100, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_CachedAmbientProbe, put = __cordl_internal_set_m_CachedAmbientProbe)) ::UnityEngine::Rendering::SphericalHarmonicsL2 m_CachedAmbientProbe;

  /// @brief Field m_CmdBuffer, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CmdBuffer, put = __cordl_internal_set_m_CmdBuffer)) ::UnityEngine::Rendering::CommandBuffer* m_CmdBuffer;

  /// @brief Field m_DebugStats, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugStats, put = __cordl_internal_set_m_DebugStats)) ::UnityEngine::Rendering::DebugRendererBatcherStats* m_DebugStats;

  /// @brief Field m_GPUDrivenProcessor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GPUDrivenProcessor, put = __cordl_internal_set_m_GPUDrivenProcessor)) ::UnityEngine::Rendering::GPUDrivenProcessor* m_GPUDrivenProcessor;

  /// @brief Field m_GrowerResources, offset 0xe8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_GrowerResources, put = __cordl_internal_set_m_GrowerResources)) ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources m_GrowerResources;

  /// @brief Field m_InstanceDataBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceDataBuffer, put = __cordl_internal_set_m_InstanceDataBuffer)) ::UnityEngine::Rendering::GPUInstanceDataBuffer* m_InstanceDataBuffer;

  /// @brief Field m_InstanceDataSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceDataSystem, put = __cordl_internal_set_m_InstanceDataSystem)) ::UnityEngine::Rendering::InstanceDataSystem* m_InstanceDataSystem;

  /// @brief Field m_LODGroupDataPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LODGroupDataPool, put = __cordl_internal_set_m_LODGroupDataPool)) ::UnityEngine::Rendering::LODGroupDataPool* m_LODGroupDataPool;

  /// @brief Field m_OcclusionCullingCommon, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OcclusionCullingCommon,
                      put = __cordl_internal_set_m_OcclusionCullingCommon)) ::UnityEngine::Rendering::OcclusionCullingCommon* m_OcclusionCullingCommon;

  /// @brief Field m_RenderersParameters, offset 0x38, size 0x70
  __declspec(property(get = __cordl_internal_get_m_RenderersParameters, put = __cordl_internal_set_m_RenderersParameters)) ::UnityEngine::Rendering::RenderersParameters m_RenderersParameters;

  /// @brief Field m_Resources, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resources, put = __cordl_internal_set_m_Resources)) ::UnityEngine::Rendering::GPUResidentDrawerResources* m_Resources;

  /// @brief Field m_SmallMeshScreenPercentage, offset 0x16c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SmallMeshScreenPercentage, put = __cordl_internal_set_m_SmallMeshScreenPercentage)) float_t m_SmallMeshScreenPercentage;

  /// @brief Field m_TransformLODGroupCallback, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformLODGroupCallback,
                      put = __cordl_internal_set_m_TransformLODGroupCallback)) ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* m_TransformLODGroupCallback;

  /// @brief Field m_UpdateLODGroupCallback, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateLODGroupCallback,
                      put = __cordl_internal_set_m_UpdateLODGroupCallback)) ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* m_UpdateLODGroupCallback;

  /// @brief Field m_UploadResources, offset 0xa8, size 0x40
  __declspec(property(get = __cordl_internal_get_m_UploadResources,
                      put = __cordl_internal_set_m_UploadResources)) ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources m_UploadResources;

  __declspec(property(get = get_occlusionCullingCommon)) ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon;

  __declspec(property(get = get_perCameraInstanceData)) ::UnityEngine::Rendering::CPUPerCameraInstanceData perCameraInstanceData;

  __declspec(property(get = get_renderersParameters)) ::UnityEngine::Rendering::RenderersParameters renderersParameters;

  __declspec(property(get = get_resources)) ::UnityEngine::Rendering::GPUResidentDrawerResources* resources;

  __declspec(property(get = get_sharedInstanceData)) ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly sharedInstanceData;

  __declspec(property(get = get_smallMeshScreenPercentage)) float_t smallMeshScreenPercentage;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ChangeInstanceBufferVersion, addr 0x6c6eb58, size 0x20, virtual false, abstract: false, final false
  inline void ChangeInstanceBufferVersion();

  /// @brief Method CreateDataBufferUploader, addr 0x6c6eb78, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBufferUploader CreateDataBufferUploader(int32_t capacity, ::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method DestroyLODGroups, addr 0x6c6e9b0, size 0x1c, virtual false, abstract: false, final false
  inline void DestroyLODGroups(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> destroyed);

  /// @brief Method Dispose, addr 0x6c6e690, size 0x13c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnsureInstanceBufferCapacity, addr 0x6c6e910, size 0x78, virtual false, abstract: false, final false
  inline void EnsureInstanceBufferCapacity();

  /// @brief Method FreeInstances, addr 0x6c6eadc, size 0x18, virtual false, abstract: false, final false
  inline void FreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method FreePerCameraInstanceData, addr 0x6c6f200, size 0x18, virtual false, abstract: false, final false
  inline void FreePerCameraInstanceData(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> cameraIDs);

  /// @brief Method FreeRendererGroupInstances, addr 0x6c6eac4, size 0x18, virtual false, abstract: false, final false
  inline void FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> rendererGroupsID);

  /// @brief Method GetAliveInstancesOfType, addr 0x6c6e800, size 0x34, virtual false, abstract: false, final false
  inline int32_t GetAliveInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method GetInstanceDataBuffer, addr 0x6c6f1c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* GetInstanceDataBuffer();

  /// @brief Method GetMaxInstancesOfType, addr 0x6c6e7cc, size 0x34, virtual false, abstract: false, final false
  inline int32_t GetMaxInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method GetRendererInstanceHandle, addr 0x6c6f054, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceHandle GetRendererInstanceHandle(::UnityEngine::EntityId rendererID);

  /// @brief Method GetVisibleTreeInstances, addr 0x6c6f1a4, size 0x1c, virtual false, abstract: false, final false
  inline void GetVisibleTreeInstances(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ParallelBitArray const> compactedVisibilityMasks,
                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ParallelBitArray const> processedBits, ::Unity::Collections::NativeList_1<int32_t> visibeTreeRendererIDs,
                                      ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> visibeTreeInstances, bool becomeVisibleOnly,
                                      ::by_ref<int32_t> becomeVisibeTreeInstancesCount);

  /// @brief Method GrowInstanceBuffer, addr 0x6c6e834, size 0xdc, virtual false, abstract: false, final false
  inline void GrowInstanceBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceNumInfo const> instanceNumInfo);

  /// @brief Method InitializeInstanceTransforms, addr 0x6c6ec04, size 0x6c, virtual false, abstract: false, final false
  inline void InitializeInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices);

  static inline ::UnityEngine::Rendering::RenderersBatchersContext* New_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersBatchersContextDesc const> desc,
                                                                             ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor,
                                                                             ::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Method ReallocateAndGetInstances, addr 0x6c6ea74, size 0x28, virtual false, abstract: false, final false
  inline void ReallocateAndGetInstances(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const> rendererData,
                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleCollectInstancesLODGroupAndMasksJob, addr 0x6c6f03c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleCollectInstancesLODGroupAndMasksJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                              ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks);

  /// @brief Method ScheduleQueryMeshInstancesJob, addr 0x6c6eb40, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryMeshInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> sortedMeshIDs,
                                                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x6c6eaf4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x6c6eb0c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x6c6eb24, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeArray_1<int32_t> instancesOffset, ::Unity::Collections::NativeArray_1<int32_t> instancesCount,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleUpdateInstanceDataJob, addr 0x6c6ea9c, size 0x28, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleUpdateInstanceDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData const> rendererData);

  /// @brief Method SubmitToGpu, addr 0x6c6ebdc, size 0x28, virtual false, abstract: false, final false
  inline void SubmitToGpu(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices,
                          ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader> uploader, bool submitOnlyWrittenParams);

  /// @brief Method SubmitToGpu, addr 0x6c6ebb4, size 0x28, virtual false, abstract: false, final false
  inline void SubmitToGpu(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBufferUploader> uploader,
                          bool submitOnlyWrittenParams);

  /// @brief Method TransformLODGroupData, addr 0x6c6e99c, size 0x14, virtual false, abstract: false, final false
  inline void TransformLODGroupData(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData const> lodGroupData);

  /// @brief Method TransformLODGroups, addr 0x6c6ef7c, size 0xa8, virtual false, abstract: false, final false
  inline void TransformLODGroups(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> lodGroupsID);

  /// @brief Method UpdateAmbientProbeAndGpuBuffer, addr 0x6c6ecd8, size 0x1dc, virtual false, abstract: false, final false
  inline void UpdateAmbientProbeAndGpuBuffer(bool forceUpdate);

  /// @brief Method UpdateCameras, addr 0x6c6f218, size 0x18, virtual false, abstract: false, final false
  inline void UpdateCameras(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> cameraIDs);

  /// @brief Method UpdateFrame, addr 0x6c6f1c8, size 0x38, virtual false, abstract: false, final false
  inline void UpdateFrame();

  /// @brief Method UpdateInstanceMotions, addr 0x6c6ef34, size 0x48, virtual false, abstract: false, final false
  inline void UpdateInstanceMotions();

  /// @brief Method UpdateInstanceTransforms, addr 0x6c6ec70, size 0x68, virtual false, abstract: false, final false
  inline void UpdateInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices);

  /// @brief Method UpdateInstanceWindDataHistory, addr 0x6c6eeb4, size 0x80, virtual false, abstract: false, final false
  inline void UpdateInstanceWindDataHistory(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices);

  /// @brief Method UpdateLODGroupData, addr 0x6c6e988, size 0x14, virtual false, abstract: false, final false
  inline void UpdateLODGroupData(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData const> lodGroupData);

  /// @brief Method UpdateLODGroups, addr 0x6c6e9cc, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateLODGroups(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> changedID);

  /// @brief Method UpdatePerFrameInstanceVisibility, addr 0x6c6f024, size 0x18, virtual false, abstract: false, final false
  inline void UpdatePerFrameInstanceVisibility(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ParallelBitArray const> compactedVisibilityMasks);

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

  /// @brief Method .ctor, addr 0x6c6dc64, size 0x364, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderersBatchersContextDesc const> desc, ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor,
                    ::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Method get_activeLodGroupCount, addr 0x6c6da18, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_activeLodGroupCount();

  /// @brief Method get_aliveInstances, addr 0x6c6dc2c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> get_aliveInstances();

  /// @brief Method get_cachedAmbientProbe, addr 0x6c6db04, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SphericalHarmonicsL2 get_cachedAmbientProbe();

  /// @brief Method get_cameraCount, addr 0x6c6db2c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_cameraCount();

  /// @brief Method get_debugStats, addr 0x6c6dc5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugRendererBatcherStats* get_debugStats();

  /// @brief Method get_defaultDescriptions, addr 0x6c6da2c, size 0x78, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUInstanceComponentDesc> get_defaultDescriptions();

  /// @brief Method get_defaultMetadata, addr 0x6c6daa4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> get_defaultMetadata();

  /// @brief Method get_gpuInstanceDataBuffer, addr 0x6c6da00, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_gpuInstanceDataBuffer();

  /// @brief Method get_hasBoundingSpheres, addr 0x6c6db14, size 0x18, virtual false, abstract: false, final false
  inline bool get_hasBoundingSpheres();

  /// @brief Method get_instanceData, addr 0x6c6db44, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUInstanceData_ReadOnly get_instanceData();

  /// @brief Method get_instanceDataBuffer, addr 0x6c6dc14, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly get_instanceDataBuffer();

  /// @brief Method get_instanceDataBufferLayoutVersion, addr 0x6c6daec, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_instanceDataBufferLayoutVersion();

  /// @brief Method get_instanceDataBufferVersion, addr 0x6c6dad4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_instanceDataBufferVersion();

  /// @brief Method get_lodGroupCullingData, addr 0x6c6dabc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> get_lodGroupCullingData();

  /// @brief Method get_occlusionCullingCommon, addr 0x6c6dc54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OcclusionCullingCommon* get_occlusionCullingCommon();

  /// @brief Method get_perCameraInstanceData, addr 0x6c6dbf4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUPerCameraInstanceData get_perCameraInstanceData();

  /// @brief Method get_renderersParameters, addr 0x6c6d9f0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderersParameters get_renderersParameters();

  /// @brief Method get_resources, addr 0x6c6dc4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUResidentDrawerResources* get_resources();

  /// @brief Method get_sharedInstanceData, addr 0x6c6db9c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly get_sharedInstanceData();

  /// @brief Method get_smallMeshScreenPercentage, addr 0x6c6dc44, size 0x8, virtual false, abstract: false, final false
  inline float_t get_smallMeshScreenPercentage();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderersBatchersContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderersBatchersContext", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderersBatchersContext(RenderersBatchersContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderersBatchersContext", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderersBatchersContext(RenderersBatchersContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18325 };

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

  /// @brief Field m_RenderersParameters, offset: 0x38, size: 0x70, def value: None
  ::UnityEngine::Rendering::RenderersParameters ___m_RenderersParameters;

  /// @brief Field m_UploadResources, offset: 0xa8, size: 0x40, def value: None
  ::UnityEngine::Rendering::GPUInstanceDataBufferUploader_GPUResources ___m_UploadResources;

  /// @brief Field m_GrowerResources, offset: 0xe8, size: 0x10, def value: None
  ::UnityEngine::Rendering::GPUInstanceDataBufferGrower_GPUResources ___m_GrowerResources;

  /// @brief Field m_CmdBuffer, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_CmdBuffer;

  /// @brief Field m_CachedAmbientProbe, offset: 0x100, size: 0x6c, def value: None
  ::UnityEngine::Rendering::SphericalHarmonicsL2 ___m_CachedAmbientProbe;

  /// @brief Field m_SmallMeshScreenPercentage, offset: 0x16c, size: 0x4, def value: None
  float_t ___m_SmallMeshScreenPercentage;

  /// @brief Field m_UpdateLODGroupCallback, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* ___m_UpdateLODGroupCallback;

  /// @brief Field m_TransformLODGroupCallback, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback* ___m_TransformLODGroupCallback;

  /// @brief Field m_OcclusionCullingCommon, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::Rendering::OcclusionCullingCommon* ___m_OcclusionCullingCommon;

  /// @brief Field m_DebugStats, offset: 0x188, size: 0x8, def value: None
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

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_UploadResources) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_GrowerResources) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_CmdBuffer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_CachedAmbientProbe) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_SmallMeshScreenPercentage) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_UpdateLODGroupCallback) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_TransformLODGroupCallback) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_OcclusionCullingCommon) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersBatchersContext, ___m_DebugStats) == 0x188, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderersBatchersContext) == 0x190, "Size mismatch!");

} // namespace UnityEngine::Rendering
