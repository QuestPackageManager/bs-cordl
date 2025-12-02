#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullingBatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCuller_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCullingBatcher)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct BatchCullingOutput;
}
namespace UnityEngine::Rendering {
struct BatchID;
}
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnFinishedCulling;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
class CPUDrawInstanceData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
namespace UnityEngine::Rendering {
struct InstanceComponentGroup;
}
namespace UnityEngine::Rendering {
struct InstanceCuller;
}
namespace UnityEngine::Rendering {
struct InstanceCullingBatcherDesc;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
class OnCullingCompleteCallback;
}
namespace UnityEngine::Rendering {
struct ParallelBitArray;
}
namespace UnityEngine::Rendering {
struct RenderRequestBatcherContext;
}
namespace UnityEngine::Rendering {
class RenderersBatchersContext;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceCullingBatcher;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::InstanceCullingBatcher);
// Dependencies System.Object, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.BatchID, UnityEngine.Rendering.BatchMaterialID, UnityEngine.Rendering.BatchMeshID,
// UnityEngine.Rendering.GPUDrivenPackedMaterialData, UnityEngine.Rendering.InstanceCuller
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcher
class CORDL_TYPE InstanceCullingBatcher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_batchMaterialHash)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> batchMaterialHash;

  __declspec(property(get = get_culler)) ::UnityEngine::Rendering::InstanceCuller culler;

  /// @brief Field m_BRG, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BRG, put = __cordl_internal_set_m_BRG)) ::UnityEngine::Rendering::BatchRendererGroup* m_BRG;

  /// @brief Field m_BatchMaterialHash, offset 0x1c0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_BatchMaterialHash,
                      put = __cordl_internal_set_m_BatchMaterialHash)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID>
      m_BatchMaterialHash;

  /// @brief Field m_BatchMeshHash, offset 0x1e0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_BatchMeshHash,
                      put = __cordl_internal_set_m_BatchMeshHash)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMeshID>
      m_BatchMeshHash;

  /// @brief Field m_BatchersContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BatchersContext, put = __cordl_internal_set_m_BatchersContext)) ::UnityEngine::Rendering::RenderersBatchersContext* m_BatchersContext;

  /// @brief Field m_CachedInstanceDataBufferLayoutVersion, offset 0x1f0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedInstanceDataBufferLayoutVersion,
                      put = __cordl_internal_set_m_CachedInstanceDataBufferLayoutVersion)) int32_t m_CachedInstanceDataBufferLayoutVersion;

  /// @brief Field m_Culler, offset 0x38, size 0x188
  __declspec(property(get = __cordl_internal_get_m_Culler, put = __cordl_internal_set_m_Culler)) ::UnityEngine::Rendering::InstanceCuller m_Culler;

  /// @brief Field m_DrawInstanceData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawInstanceData, put = __cordl_internal_set_m_DrawInstanceData)) ::UnityEngine::Rendering::CPUDrawInstanceData* m_DrawInstanceData;

  /// @brief Field m_GlobalBatchIDs, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_GlobalBatchIDs,
                      put = __cordl_internal_set_m_GlobalBatchIDs)) ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID>
      m_GlobalBatchIDs;

  /// @brief Field m_OnCompleteCallback, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnCompleteCallback, put = __cordl_internal_set_m_OnCompleteCallback)) ::UnityEngine::Rendering::OnCullingCompleteCallback* m_OnCompleteCallback;

  /// @brief Field m_PackedMaterialHash, offset 0x1d0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_PackedMaterialHash,
                      put = __cordl_internal_set_m_PackedMaterialHash)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>
      m_PackedMaterialHash;

  __declspec(property(get = get_packedMaterialHash)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialHash;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BuildBatch, addr 0x660153c, size 0x210, virtual false, abstract: false, final false
  inline void BuildBatch(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::Unity::Collections::NativeArray_1<int32_t> usedMaterialIDs,
                         ::Unity::Collections::NativeArray_1<int32_t> usedMeshIDs, ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData, bool registerMaterialsAndMeshes);

  /// @brief Method DestroyDrawInstances, addr 0x660061c, size 0x1c, virtual false, abstract: false, final false
  inline void DestroyDrawInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method DestroyMaterials, addr 0x6600638, size 0x2b4, virtual false, abstract: false, final false
  inline void DestroyMaterials(::Unity::Collections::NativeArray_1<int32_t> destroyedMaterials);

  /// @brief Method DestroyMeshes, addr 0x66008ec, size 0x1b0, virtual false, abstract: false, final false
  inline void DestroyMeshes(::Unity::Collections::NativeArray_1<int32_t> destroyedMeshes);

  /// @brief Method Dispose, addr 0x65ffd5c, size 0x2e8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetBatchID, addr 0x65ffb20, size 0x23c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::BatchID GetBatchID(::UnityEngine::Rendering::InstanceComponentGroup componentsOverriden);

  /// @brief Method GetCompactedVisibilityMasks, addr 0x6601768, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ParallelBitArray GetCompactedVisibilityMasks(bool syncCullingJobs);

  /// @brief Method GetDrawInstanceData, addr 0x66002ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUDrawInstanceData* GetDrawInstanceData();

  /// @brief Method InstanceOccludersUpdated, addr 0x660174c, size 0x10, virtual false, abstract: false, final false
  inline void InstanceOccludersUpdated(int32_t viewInstanceID, int32_t subviewMask);

  static inline ::UnityEngine::Rendering::InstanceCullingBatcher* New_ctor(::UnityEngine::Rendering::RenderersBatchersContext* batcherContext,
                                                                           ::UnityEngine::Rendering::InstanceCullingBatcherDesc desc,
                                                                           ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* onFinishedCulling);

  /// @brief Method OnBeginCameraRendering, addr 0x6601884, size 0x18, virtual false, abstract: false, final false
  inline void OnBeginCameraRendering(::UnityEngine::Camera* camera);

  /// @brief Method OnEndCameraRendering, addr 0x660189c, size 0x18, virtual false, abstract: false, final false
  inline void OnEndCameraRendering(::UnityEngine::Camera* camera);

  /// @brief Method OnEndContextRendering, addr 0x66017d0, size 0xb4, virtual false, abstract: false, final false
  inline void OnEndContextRendering();

  /// @brief Method OnFinishedCulling, addr 0x6600610, size 0xc, virtual false, abstract: false, final false
  inline void OnFinishedCulling(::System::IntPtr customCullingResult);

  /// @brief Method OnPerformCulling, addr 0x66002b4, size 0x35c, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle OnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cc,
                                                   ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext);

  /// @brief Method PostCullBeginCameraRendering, addr 0x6600a9c, size 0x4, virtual false, abstract: false, final false
  inline void PostCullBeginCameraRendering(::UnityEngine::Rendering::RenderRequestBatcherContext context);

  /// @brief Method RegisterBatchMaterials, addr 0x6600f34, size 0x510, virtual false, abstract: false, final false
  inline void RegisterBatchMaterials(::ByRef<::Unity::Collections::NativeArray_1<int32_t>> usedMaterialIDs);

  /// @brief Method RegisterBatchMeshes, addr 0x6600aa0, size 0x494, virtual false, abstract: false, final false
  inline void RegisterBatchMeshes(::Unity::Collections::NativeArray_1<int32_t> meshIDs);

  /// @brief Method SchedulePackedMaterialCacheUpdate, addr 0x6601444, size 0xf8, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle SchedulePackedMaterialCacheUpdate(::Unity::Collections::NativeArray_1<int32_t> materialIDs,
                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas);

  /// @brief Method UpdateFrame, addr 0x660175c, size 0xc, virtual false, abstract: false, final false
  inline void UpdateFrame();

  /// @brief Method UpdateInstanceDataBufferLayoutVersion, addr 0x6600044, size 0x268, virtual false, abstract: false, final false
  inline void UpdateInstanceDataBufferLayoutVersion();

  constexpr ::UnityEngine::Rendering::BatchRendererGroup* const& __cordl_internal_get_m_BRG() const;

  constexpr ::UnityEngine::Rendering::BatchRendererGroup*& __cordl_internal_get_m_BRG();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> const& __cordl_internal_get_m_BatchMaterialHash() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID>& __cordl_internal_get_m_BatchMaterialHash();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMeshID> const& __cordl_internal_get_m_BatchMeshHash() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMeshID>& __cordl_internal_get_m_BatchMeshHash();

  constexpr ::UnityEngine::Rendering::RenderersBatchersContext* const& __cordl_internal_get_m_BatchersContext() const;

  constexpr ::UnityEngine::Rendering::RenderersBatchersContext*& __cordl_internal_get_m_BatchersContext();

  constexpr int32_t const& __cordl_internal_get_m_CachedInstanceDataBufferLayoutVersion() const;

  constexpr int32_t& __cordl_internal_get_m_CachedInstanceDataBufferLayoutVersion();

  constexpr ::UnityEngine::Rendering::InstanceCuller const& __cordl_internal_get_m_Culler() const;

  constexpr ::UnityEngine::Rendering::InstanceCuller& __cordl_internal_get_m_Culler();

  constexpr ::UnityEngine::Rendering::CPUDrawInstanceData* const& __cordl_internal_get_m_DrawInstanceData() const;

  constexpr ::UnityEngine::Rendering::CPUDrawInstanceData*& __cordl_internal_get_m_DrawInstanceData();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> const& __cordl_internal_get_m_GlobalBatchIDs() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID>& __cordl_internal_get_m_GlobalBatchIDs();

  constexpr ::UnityEngine::Rendering::OnCullingCompleteCallback* const& __cordl_internal_get_m_OnCompleteCallback() const;

  constexpr ::UnityEngine::Rendering::OnCullingCompleteCallback*& __cordl_internal_get_m_OnCompleteCallback();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const& __cordl_internal_get_m_PackedMaterialHash() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>& __cordl_internal_get_m_PackedMaterialHash();

  constexpr void __cordl_internal_set_m_BRG(::UnityEngine::Rendering::BatchRendererGroup* value);

  constexpr void __cordl_internal_set_m_BatchMaterialHash(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> value);

  constexpr void __cordl_internal_set_m_BatchMeshHash(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMeshID> value);

  constexpr void __cordl_internal_set_m_BatchersContext(::UnityEngine::Rendering::RenderersBatchersContext* value);

  constexpr void __cordl_internal_set_m_CachedInstanceDataBufferLayoutVersion(int32_t value);

  constexpr void __cordl_internal_set_m_Culler(::UnityEngine::Rendering::InstanceCuller value);

  constexpr void __cordl_internal_set_m_DrawInstanceData(::UnityEngine::Rendering::CPUDrawInstanceData* value);

  constexpr void __cordl_internal_set_m_GlobalBatchIDs(::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> value);

  constexpr void __cordl_internal_set_m_OnCompleteCallback(::UnityEngine::Rendering::OnCullingCompleteCallback* value);

  constexpr void __cordl_internal_set_m_PackedMaterialHash(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> value);

  /// @brief Method .ctor, addr 0x65ff808, size 0x318, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderersBatchersContext* batcherContext, ::UnityEngine::Rendering::InstanceCullingBatcherDesc desc,
                    ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* onFinishedCulling);

  /// @brief Method get_batchMaterialHash, addr 0x65ff7f0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> get_batchMaterialHash();

  /// @brief Method get_culler, addr 0x65fcf5c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::InstanceCuller> get_culler();

  /// @brief Method get_packedMaterialHash, addr 0x65ff7fc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> get_packedMaterialHash();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullingBatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCullingBatcher(InstanceCullingBatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCullingBatcher(InstanceCullingBatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17630 };

  /// @brief Field m_BatchersContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderersBatchersContext* ___m_BatchersContext;

  /// @brief Field m_DrawInstanceData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::CPUDrawInstanceData* ___m_DrawInstanceData;

  /// @brief Field m_BRG, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::BatchRendererGroup* ___m_BRG;

  /// @brief Field m_GlobalBatchIDs, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> ___m_GlobalBatchIDs;

  /// @brief Field m_Culler, offset: 0x38, size: 0x188, def value: None
  ::UnityEngine::Rendering::InstanceCuller ___m_Culler;

  /// @brief Field m_BatchMaterialHash, offset: 0x1c0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> ___m_BatchMaterialHash;

  /// @brief Field m_PackedMaterialHash, offset: 0x1d0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> ___m_PackedMaterialHash;

  /// @brief Field m_BatchMeshHash, offset: 0x1e0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMeshID> ___m_BatchMeshHash;

  /// @brief Field m_CachedInstanceDataBufferLayoutVersion, offset: 0x1f0, size: 0x4, def value: None
  int32_t ___m_CachedInstanceDataBufferLayoutVersion;

  /// @brief Field m_OnCompleteCallback, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::Rendering::OnCullingCompleteCallback* ___m_OnCompleteCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_BatchersContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_DrawInstanceData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_BRG) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_GlobalBatchIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_Culler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_BatchMaterialHash) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_PackedMaterialHash) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_BatchMeshHash) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_CachedInstanceDataBufferLayoutVersion) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcher, ___m_OnCompleteCallback) == 0x1f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCullingBatcher, 0x200>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::InstanceCullingBatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCullingBatcher*, "UnityEngine.Rendering", "InstanceCullingBatcher");
