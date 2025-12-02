#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentBatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GPUResidentBatcher)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor;
}
namespace UnityEngine::Rendering {
class GPUDrivenRendererDataCallback;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
namespace UnityEngine::Rendering {
struct InstanceCullingBatcherDesc;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcher;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct OccluderParameters;
}
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingSettings;
}
namespace UnityEngine::Rendering {
struct RenderRequestBatcherContext;
}
namespace UnityEngine::Rendering {
class RenderersBatchersContext;
}
namespace UnityEngine::Rendering {
struct SubviewOcclusionTest;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUResidentBatcher;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUResidentBatcher);
// Dependencies System.Object, UnityEngine.Rendering.ParallelBitArray
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentBatcher
class CORDL_TYPE GPUResidentBatcher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_batchersContext)) ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext;

  __declspec(property(get = get_instanceCullingBatcher)) ::UnityEngine::Rendering::InstanceCullingBatcher* instanceCullingBatcher;

  /// @brief Field m_BatchersContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BatchersContext, put = __cordl_internal_set_m_BatchersContext)) ::UnityEngine::Rendering::RenderersBatchersContext* m_BatchersContext;

  /// @brief Field m_GPUDrivenProcessor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GPUDrivenProcessor, put = __cordl_internal_set_m_GPUDrivenProcessor)) ::UnityEngine::Rendering::GPUDrivenProcessor* m_GPUDrivenProcessor;

  /// @brief Field m_InstanceCullingBatcher, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceCullingBatcher,
                      put = __cordl_internal_set_m_InstanceCullingBatcher)) ::UnityEngine::Rendering::InstanceCullingBatcher* m_InstanceCullingBatcher;

  /// @brief Field m_ProcessedThisFrameTreeBits, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ProcessedThisFrameTreeBits,
                      put = __cordl_internal_set_m_ProcessedThisFrameTreeBits)) ::UnityEngine::Rendering::ParallelBitArray m_ProcessedThisFrameTreeBits;

  /// @brief Field m_UpdateRendererBatchesCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateRendererBatchesCallback,
                      put = __cordl_internal_set_m_UpdateRendererBatchesCallback)) ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* m_UpdateRendererBatchesCallback;

  /// @brief Field m_UpdateRendererInstancesAndBatchesCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateRendererInstancesAndBatchesCallback,
                      put = __cordl_internal_set_m_UpdateRendererInstancesAndBatchesCallback)) ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* m_UpdateRendererInstancesAndBatchesCallback;

  __declspec(property(get = get_occlusionCullingCommon)) ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method DestroyDrawInstances, addr 0x65f26a8, size 0x18, virtual false, abstract: false, final false
  inline void DestroyDrawInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method DestroyMaterials, addr 0x65f2690, size 0x18, virtual false, abstract: false, final false
  inline void DestroyMaterials(::Unity::Collections::NativeArray_1<int32_t> destroyedMaterials);

  /// @brief Method DestroyMeshes, addr 0x65f26c0, size 0x18, virtual false, abstract: false, final false
  inline void DestroyMeshes(::Unity::Collections::NativeArray_1<int32_t> destroyedMeshes);

  /// @brief Method Dispose, addr 0x65f2528, size 0x80, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeRendererGroupInstances, addr 0x65f26d8, size 0x158, virtual false, abstract: false, final false
  inline void FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs);

  /// @brief Method InstanceOcclusionTest, addr 0x65f2830, size 0x3c, virtual false, abstract: false, final false
  inline void InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests);

  static inline ::UnityEngine::Rendering::GPUResidentBatcher* New_ctor(::UnityEngine::Rendering::RenderersBatchersContext* batcherContext,
                                                                       ::UnityEngine::Rendering::InstanceCullingBatcherDesc instanceCullerBatcherDesc,
                                                                       ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor);

  /// @brief Method OnBeginCameraRendering, addr 0x65f2618, size 0x24, virtual false, abstract: false, final false
  inline void OnBeginCameraRendering(::UnityEngine::Camera* camera);

  /// @brief Method OnBeginContextRendering, addr 0x65f25a8, size 0x5c, virtual false, abstract: false, final false
  inline void OnBeginContextRendering();

  /// @brief Method OnEndCameraRendering, addr 0x65f263c, size 0x24, virtual false, abstract: false, final false
  inline void OnEndCameraRendering(::UnityEngine::Camera* camera);

  /// @brief Method OnEndContextRendering, addr 0x65f2604, size 0x14, virtual false, abstract: false, final false
  inline void OnEndContextRendering();

  /// @brief Method OnFinishedCulling, addr 0x65f3248, size 0x34, virtual false, abstract: false, final false
  inline void OnFinishedCulling(::System::IntPtr customCullingResult);

  /// @brief Method OnSetupAmbientProbe, addr 0x65f2e8c, size 0x1c, virtual false, abstract: false, final false
  inline void OnSetupAmbientProbe();

  /// @brief Method PostCullBeginCameraRendering, addr 0x65f2e78, size 0x14, virtual false, abstract: false, final false
  inline void PostCullBeginCameraRendering(::UnityEngine::Rendering::RenderRequestBatcherContext context);

  /// @brief Method ProcessTrees, addr 0x65f327c, size 0x3b0, virtual false, abstract: false, final false
  inline void ProcessTrees();

  /// @brief Method SchedulePackedMaterialCacheUpdate, addr 0x65f2e60, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle SchedulePackedMaterialCacheUpdate(::Unity::Collections::NativeArray_1<int32_t> materialIDs,
                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas);

  /// @brief Method UpdateFrame, addr 0x65f2660, size 0x30, virtual false, abstract: false, final false
  inline void UpdateFrame();

  /// @brief Method UpdateInstanceOccluders, addr 0x65f2d40, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                      ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates);

  /// @brief Method UpdateRendererBatches, addr 0x65f3100, size 0x148, virtual false, abstract: false, final false
  inline void UpdateRendererBatches(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* materials);

  /// @brief Method UpdateRendererInstancesAndBatches, addr 0x65f2ea8, size 0x258, virtual false, abstract: false, final false
  inline void UpdateRendererInstancesAndBatches(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                                ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* materials);

  /// @brief Method UpdateRenderers, addr 0x65f2d7c, size 0xe4, virtual false, abstract: false, final false
  inline void UpdateRenderers(::Unity::Collections::NativeArray_1<int32_t> renderersID, bool materialUpdateOnly);

  /// @brief Method UpdateSpeedTreeWindAndUploadWindParamsToGPU, addr 0x65f362c, size 0x2cc, virtual false, abstract: false, final false
  inline void UpdateSpeedTreeWindAndUploadWindParamsToGPU(::Unity::Collections::NativeArray_1<int32_t> treeRendererIDs,
                                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> treeInstances, bool history);

  constexpr ::UnityEngine::Rendering::RenderersBatchersContext* const& __cordl_internal_get_m_BatchersContext() const;

  constexpr ::UnityEngine::Rendering::RenderersBatchersContext*& __cordl_internal_get_m_BatchersContext();

  constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& __cordl_internal_get_m_GPUDrivenProcessor() const;

  constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& __cordl_internal_get_m_GPUDrivenProcessor();

  constexpr ::UnityEngine::Rendering::InstanceCullingBatcher* const& __cordl_internal_get_m_InstanceCullingBatcher() const;

  constexpr ::UnityEngine::Rendering::InstanceCullingBatcher*& __cordl_internal_get_m_InstanceCullingBatcher();

  constexpr ::UnityEngine::Rendering::ParallelBitArray const& __cordl_internal_get_m_ProcessedThisFrameTreeBits() const;

  constexpr ::UnityEngine::Rendering::ParallelBitArray& __cordl_internal_get_m_ProcessedThisFrameTreeBits();

  constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* const& __cordl_internal_get_m_UpdateRendererBatchesCallback() const;

  constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*& __cordl_internal_get_m_UpdateRendererBatchesCallback();

  constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* const& __cordl_internal_get_m_UpdateRendererInstancesAndBatchesCallback() const;

  constexpr ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*& __cordl_internal_get_m_UpdateRendererInstancesAndBatchesCallback();

  constexpr void __cordl_internal_set_m_BatchersContext(::UnityEngine::Rendering::RenderersBatchersContext* value);

  constexpr void __cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor* value);

  constexpr void __cordl_internal_set_m_InstanceCullingBatcher(::UnityEngine::Rendering::InstanceCullingBatcher* value);

  constexpr void __cordl_internal_set_m_ProcessedThisFrameTreeBits(::UnityEngine::Rendering::ParallelBitArray value);

  constexpr void __cordl_internal_set_m_UpdateRendererBatchesCallback(::UnityEngine::Rendering::GPUDrivenRendererDataCallback* value);

  constexpr void __cordl_internal_set_m_UpdateRendererInstancesAndBatchesCallback(::UnityEngine::Rendering::GPUDrivenRendererDataCallback* value);

  /// @brief Method .ctor, addr 0x65f23cc, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderersBatchersContext* batcherContext, ::UnityEngine::Rendering::InstanceCullingBatcherDesc instanceCullerBatcherDesc,
                    ::UnityEngine::Rendering::GPUDrivenProcessor* gpuDrivenProcessor);

  /// @brief Method get_batchersContext, addr 0x65f23a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderersBatchersContext* get_batchersContext();

  /// @brief Method get_instanceCullingBatcher, addr 0x65f23c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceCullingBatcher* get_instanceCullingBatcher();

  /// @brief Method get_occlusionCullingCommon, addr 0x65f23ac, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OcclusionCullingCommon* get_occlusionCullingCommon();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentBatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentBatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentBatcher(GPUResidentBatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentBatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentBatcher(GPUResidentBatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17569 };

  /// @brief Field m_BatchersContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderersBatchersContext* ___m_BatchersContext;

  /// @brief Field m_GPUDrivenProcessor, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenProcessor* ___m_GPUDrivenProcessor;

  /// @brief Field m_UpdateRendererInstancesAndBatchesCallback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* ___m_UpdateRendererInstancesAndBatchesCallback;

  /// @brief Field m_UpdateRendererBatchesCallback, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenRendererDataCallback* ___m_UpdateRendererBatchesCallback;

  /// @brief Field m_InstanceCullingBatcher, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::InstanceCullingBatcher* ___m_InstanceCullingBatcher;

  /// @brief Field m_ProcessedThisFrameTreeBits, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray ___m_ProcessedThisFrameTreeBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentBatcher, ___m_BatchersContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentBatcher, ___m_GPUDrivenProcessor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentBatcher, ___m_UpdateRendererInstancesAndBatchesCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentBatcher, ___m_UpdateRendererBatchesCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentBatcher, ___m_InstanceCullingBatcher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentBatcher, ___m_ProcessedThisFrameTreeBits) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentBatcher, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUResidentBatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentBatcher*, "UnityEngine.Rendering", "GPUResidentBatcher");
