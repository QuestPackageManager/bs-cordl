#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedRendererData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceAllocators_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdatePacket_def.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceDataSystem)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2;
}
namespace Unity::Jobs {
class IJobParallelForBatch;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::Rendering {
struct CPUInstanceData_ReadOnly;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData_ReadOnly;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
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
struct InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_FreeInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_FreeRendererGroupInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem_InstanceTransformUpdateIDs;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem_InstanceWindDataUpdateIDs;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_MotionUpdateJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_ProbesUpdateJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_QueryRendererGroupInstancesCountJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_QueryRendererGroupInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_QueryRendererGroupInstancesMultiJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_QuerySortedMeshInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_ReallocateInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_ScatterTetrahedronCacheIndicesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_TransformUpdateJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_UpdateCompactedInstanceVisibilityJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_UpdateRendererInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
namespace UnityEngine::Rendering {
struct ParallelBitArray;
}
namespace UnityEngine::Rendering {
struct RenderersParameters;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine::Rendering {
struct TransformUpdatePacket;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceDataSystem;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem_InstanceTransformUpdateIDs;
}
namespace UnityEngine::Rendering {
class InstanceDataSystem_InstanceWindDataUpdateIDs;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_FreeInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_FreeRendererGroupInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_MotionUpdateJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_ProbesUpdateJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_QueryRendererGroupInstancesCountJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_QueryRendererGroupInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_QueryRendererGroupInstancesMultiJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_QuerySortedMeshInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_ReallocateInstancesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_ScatterTetrahedronCacheIndicesJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_TransformUpdateJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_UpdateCompactedInstanceVisibilityJob;
}
namespace UnityEngine::Rendering {
struct InstanceDataSystem_UpdateRendererInstancesJob;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::InstanceDataSystem);
MARK_REF_PTR_T(::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs);
MARK_REF_PTR_T(::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob);
MARK_VAL_T(::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystem/InstanceTransformUpdateIDs
class CORDL_TYPE InstanceDataSystem_InstanceTransformUpdateIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _BoundingSphereDataQueue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BoundingSphereDataQueue, put = setStaticF__BoundingSphereDataQueue)) int32_t _BoundingSphereDataQueue;

  /// @brief Field _BoundingSphereOutputVec4Offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BoundingSphereOutputVec4Offset, put = setStaticF__BoundingSphereOutputVec4Offset)) int32_t _BoundingSphereOutputVec4Offset;

  /// @brief Field _OutputProbeBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputProbeBuffer, put = setStaticF__OutputProbeBuffer)) int32_t _OutputProbeBuffer;

  /// @brief Field _OutputTransformBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputTransformBuffer, put = setStaticF__OutputTransformBuffer)) int32_t _OutputTransformBuffer;

  /// @brief Field _ProbeOcclusionUpdateDataQueue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ProbeOcclusionUpdateDataQueue, put = setStaticF__ProbeOcclusionUpdateDataQueue)) int32_t _ProbeOcclusionUpdateDataQueue;

  /// @brief Field _ProbeUpdateDataQueue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ProbeUpdateDataQueue, put = setStaticF__ProbeUpdateDataQueue)) int32_t _ProbeUpdateDataQueue;

  /// @brief Field _ProbeUpdateIndexQueue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ProbeUpdateIndexQueue, put = setStaticF__ProbeUpdateIndexQueue)) int32_t _ProbeUpdateIndexQueue;

  /// @brief Field _ProbeUpdateQueueCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ProbeUpdateQueueCount, put = setStaticF__ProbeUpdateQueueCount)) int32_t _ProbeUpdateQueueCount;

  /// @brief Field _SHUpdateVec4Offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SHUpdateVec4Offset, put = setStaticF__SHUpdateVec4Offset)) int32_t _SHUpdateVec4Offset;

  /// @brief Field _TransformUpdateDataQueue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TransformUpdateDataQueue, put = setStaticF__TransformUpdateDataQueue)) int32_t _TransformUpdateDataQueue;

  /// @brief Field _TransformUpdateIndexQueue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TransformUpdateIndexQueue, put = setStaticF__TransformUpdateIndexQueue)) int32_t _TransformUpdateIndexQueue;

  /// @brief Field _TransformUpdateOutputL2WVec4Offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TransformUpdateOutputL2WVec4Offset, put = setStaticF__TransformUpdateOutputL2WVec4Offset)) int32_t _TransformUpdateOutputL2WVec4Offset;

  /// @brief Field _TransformUpdateOutputPrevL2WVec4Offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TransformUpdateOutputPrevL2WVec4Offset, put = setStaticF__TransformUpdateOutputPrevL2WVec4Offset)) int32_t _TransformUpdateOutputPrevL2WVec4Offset;

  /// @brief Field _TransformUpdateOutputPrevW2LVec4Offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TransformUpdateOutputPrevW2LVec4Offset, put = setStaticF__TransformUpdateOutputPrevW2LVec4Offset)) int32_t _TransformUpdateOutputPrevW2LVec4Offset;

  /// @brief Field _TransformUpdateOutputW2LVec4Offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TransformUpdateOutputW2LVec4Offset, put = setStaticF__TransformUpdateOutputW2LVec4Offset)) int32_t _TransformUpdateOutputW2LVec4Offset;

  /// @brief Field _TransformUpdateQueueCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TransformUpdateQueueCount, put = setStaticF__TransformUpdateQueueCount)) int32_t _TransformUpdateQueueCount;

  static inline int32_t getStaticF__BoundingSphereDataQueue();

  static inline int32_t getStaticF__BoundingSphereOutputVec4Offset();

  static inline int32_t getStaticF__OutputProbeBuffer();

  static inline int32_t getStaticF__OutputTransformBuffer();

  static inline int32_t getStaticF__ProbeOcclusionUpdateDataQueue();

  static inline int32_t getStaticF__ProbeUpdateDataQueue();

  static inline int32_t getStaticF__ProbeUpdateIndexQueue();

  static inline int32_t getStaticF__ProbeUpdateQueueCount();

  static inline int32_t getStaticF__SHUpdateVec4Offset();

  static inline int32_t getStaticF__TransformUpdateDataQueue();

  static inline int32_t getStaticF__TransformUpdateIndexQueue();

  static inline int32_t getStaticF__TransformUpdateOutputL2WVec4Offset();

  static inline int32_t getStaticF__TransformUpdateOutputPrevL2WVec4Offset();

  static inline int32_t getStaticF__TransformUpdateOutputPrevW2LVec4Offset();

  static inline int32_t getStaticF__TransformUpdateOutputW2LVec4Offset();

  static inline int32_t getStaticF__TransformUpdateQueueCount();

  static inline void setStaticF__BoundingSphereDataQueue(int32_t value);

  static inline void setStaticF__BoundingSphereOutputVec4Offset(int32_t value);

  static inline void setStaticF__OutputProbeBuffer(int32_t value);

  static inline void setStaticF__OutputTransformBuffer(int32_t value);

  static inline void setStaticF__ProbeOcclusionUpdateDataQueue(int32_t value);

  static inline void setStaticF__ProbeUpdateDataQueue(int32_t value);

  static inline void setStaticF__ProbeUpdateIndexQueue(int32_t value);

  static inline void setStaticF__ProbeUpdateQueueCount(int32_t value);

  static inline void setStaticF__SHUpdateVec4Offset(int32_t value);

  static inline void setStaticF__TransformUpdateDataQueue(int32_t value);

  static inline void setStaticF__TransformUpdateIndexQueue(int32_t value);

  static inline void setStaticF__TransformUpdateOutputL2WVec4Offset(int32_t value);

  static inline void setStaticF__TransformUpdateOutputPrevL2WVec4Offset(int32_t value);

  static inline void setStaticF__TransformUpdateOutputPrevW2LVec4Offset(int32_t value);

  static inline void setStaticF__TransformUpdateOutputW2LVec4Offset(int32_t value);

  static inline void setStaticF__TransformUpdateQueueCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_InstanceTransformUpdateIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem_InstanceTransformUpdateIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystem_InstanceTransformUpdateIDs(InstanceDataSystem_InstanceTransformUpdateIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem_InstanceTransformUpdateIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystem_InstanceTransformUpdateIDs(InstanceDataSystem_InstanceTransformUpdateIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17674 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystem/InstanceWindDataUpdateIDs
class CORDL_TYPE InstanceDataSystem_InstanceWindDataUpdateIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _WindDataBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__WindDataBuffer, put = setStaticF__WindDataBuffer)) int32_t _WindDataBuffer;

  /// @brief Field _WindDataQueueCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__WindDataQueueCount, put = setStaticF__WindDataQueueCount)) int32_t _WindDataQueueCount;

  /// @brief Field _WindDataUpdateIndexQueue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__WindDataUpdateIndexQueue, put = setStaticF__WindDataUpdateIndexQueue)) int32_t _WindDataUpdateIndexQueue;

  /// @brief Field _WindHistoryParamAddressArray, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__WindHistoryParamAddressArray, put = setStaticF__WindHistoryParamAddressArray)) int32_t _WindHistoryParamAddressArray;

  /// @brief Field _WindParamAddressArray, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__WindParamAddressArray, put = setStaticF__WindParamAddressArray)) int32_t _WindParamAddressArray;

  static inline int32_t getStaticF__WindDataBuffer();

  static inline int32_t getStaticF__WindDataQueueCount();

  static inline int32_t getStaticF__WindDataUpdateIndexQueue();

  static inline int32_t getStaticF__WindHistoryParamAddressArray();

  static inline int32_t getStaticF__WindParamAddressArray();

  static inline void setStaticF__WindDataBuffer(int32_t value);

  static inline void setStaticF__WindDataQueueCount(int32_t value);

  static inline void setStaticF__WindDataUpdateIndexQueue(int32_t value);

  static inline void setStaticF__WindHistoryParamAddressArray(int32_t value);

  static inline void setStaticF__WindParamAddressArray(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_InstanceWindDataUpdateIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem_InstanceWindDataUpdateIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystem_InstanceWindDataUpdateIDs(InstanceDataSystem_InstanceWindDataUpdateIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem_InstanceWindDataUpdateIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystem_InstanceWindDataUpdateIDs(InstanceDataSystem_InstanceWindDataUpdateIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17675 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/QueryRendererGroupInstancesCountJob
struct CORDL_TYPE InstanceDataSystem_QueryRendererGroupInstancesCountJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x6674398, size 0xd0, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_QueryRendererGroupInstancesCountJob();

  // Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty:
  // "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None }, CppParam { name: "rendererGroupInstanceMultiHash", ty:
  // "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "rendererGroupIDs", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instancesCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
  // None }]
  constexpr InstanceDataSystem_QueryRendererGroupInstancesCountJob(::UnityEngine::Rendering::CPUInstanceData instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
                                                                   ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash,
                                                                   ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> instancesCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17676 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1b8 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field instanceData, offset: 0x0, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field sharedInstanceData, offset: 0xe0, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  /// @brief Field rendererGroupInstanceMultiHash, offset: 0x188, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash;

  /// @brief Field rendererGroupIDs, offset: 0x198, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs;

  /// @brief Field instancesCount, offset: 0x1a8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob, instanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob, sharedInstanceData) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob, rendererGroupInstanceMultiHash) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob, rendererGroupIDs) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob, instancesCount) == 0x1a8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob, 0x1b8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/ComputeInstancesOffsetAndResizeInstancesArrayJob
struct CORDL_TYPE InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x6674468, size 0x8c, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob();

  // Ctor Parameters [CppParam { name: "instancesCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instancesOffset", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>",
  // modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob(::Unity::Collections::NativeArray_1<int32_t> instancesCount,
                                                                                ::Unity::Collections::NativeArray_1<int32_t> instancesOffset,
                                                                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17677 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field instancesCount, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesCount;

  /// @brief Field instancesOffset, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesOffset;

  /// @brief Field instances, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, instancesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, instancesOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, instances) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>,
// UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/QueryRendererGroupInstancesJob
struct CORDL_TYPE InstanceDataSystem_QueryRendererGroupInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x66744f4, size 0x134, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_QueryRendererGroupInstancesJob();

  // Ctor Parameters [CppParam { name: "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "",
  // def_value: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "atomicNonFoundInstancesCount", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_QueryRendererGroupInstancesJob(::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash,
                                                              ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                              ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                              ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundInstancesCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17678 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field rendererGroupInstanceMultiHash, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash;

  /// @brief Field rendererGroupIDs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs;

  /// @brief Field instances, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field atomicNonFoundInstancesCount, offset: 0x30, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundInstancesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob, rendererGroupInstanceMultiHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob, rendererGroupIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob, instances) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob, atomicNonFoundInstancesCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>,
// UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/QueryRendererGroupInstancesMultiJob
struct CORDL_TYPE InstanceDataSystem_QueryRendererGroupInstancesMultiJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x6674628, size 0x20c, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_QueryRendererGroupInstancesMultiJob();

  // Ctor Parameters [CppParam { name: "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "",
  // def_value: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instancesOffsets", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instancesCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name:
  // "atomicNonFoundSharedInstancesCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }, CppParam { name: "atomicNonFoundInstancesCount", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_QueryRendererGroupInstancesMultiJob(::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash,
                                                                   ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> instancesOffsets,
                                                                   ::Unity::Collections::NativeArray_1<int32_t> instancesCounts,
                                                                   ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundSharedInstancesCount,
                                                                   ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundInstancesCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17679 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field rendererGroupInstanceMultiHash, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash;

  /// @brief Field rendererGroupIDs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs;

  /// @brief Field instancesOffsets, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesOffsets;

  /// @brief Field instancesCounts, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesCounts;

  /// @brief Field instances, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field atomicNonFoundSharedInstancesCount, offset: 0x50, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundSharedInstancesCount;

  /// @brief Field atomicNonFoundInstancesCount, offset: 0x58, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicNonFoundInstancesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, rendererGroupInstanceMultiHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, rendererGroupIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, instancesOffsets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, instancesCounts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, instances) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, atomicNonFoundSharedInstancesCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, atomicNonFoundInstancesCount) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/QuerySortedMeshInstancesJob
struct CORDL_TYPE InstanceDataSystem_QuerySortedMeshInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x6674834, size 0x1f8, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_QuerySortedMeshInstancesJob();

  // Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty:
  // "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None }, CppParam { name: "sortedMeshID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_QuerySortedMeshInstancesJob(::UnityEngine::Rendering::CPUInstanceData instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
                                                           ::Unity::Collections::NativeArray_1<int32_t> sortedMeshID,
                                                           ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17680 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1a0 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x40) };

  /// @brief Field instanceData, offset: 0x0, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field sharedInstanceData, offset: 0xe0, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  /// @brief Field sortedMeshID, offset: 0x188, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> sortedMeshID;

  /// @brief Field instances, offset: 0x198, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob, instanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob, sharedInstanceData) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob, sortedMeshID) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob, instances) == 0x198, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob, 0x1a0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.LightProbesQuery, UnityEngine.Rendering.SphericalHarmonicsL2, UnityEngine.Vector3, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/CalculateInterpolatedLightAndOcclusionProbesBatchJob
struct CORDL_TYPE InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6674a2c, size 0x168, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob();

  // Ctor Parameters [CppParam { name: "probesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightProbesQuery", ty: "::UnityEngine::LightProbesQuery", modifiers: "",
  // def_value: None }, CppParam { name: "queryPostitions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name:
  // "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "probesSphericalHarmonics", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>", modifiers: "", def_value: None }, CppParam { name: "probesOcclusion", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob(int32_t probesCount, ::UnityEngine::LightProbesQuery lightProbesQuery,
                                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> queryPostitions,
                                                                                    ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache,
                                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> probesSphericalHarmonics,
                                                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> probesOcclusion) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17681 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x1) };

  /// @brief Field k_CalculatedProbesPerBatch offset 0xffffffff size 0x4
  static constexpr int32_t k_CalculatedProbesPerBatch{ static_cast<int32_t>(0x8) };

  /// @brief Field probesCount, offset: 0x0, size: 0x4, def value: None
  int32_t probesCount;

  /// @brief Field lightProbesQuery, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::LightProbesQuery lightProbesQuery;

  /// @brief Field queryPostitions, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> queryPostitions;

  /// @brief Field compactTetrahedronCache, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache;

  /// @brief Field probesSphericalHarmonics, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> probesSphericalHarmonics;

  /// @brief Field probesOcclusion, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> probesOcclusion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, probesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, lightProbesQuery) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, queryPostitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, compactTetrahedronCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, probesSphericalHarmonics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, probesOcclusion) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/ScatterTetrahedronCacheIndicesJob
struct CORDL_TYPE InstanceDataSystem_ScatterTetrahedronCacheIndicesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6674b94, size 0x3c, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_ScatterTetrahedronCacheIndicesJob();

  // Ctor Parameters [CppParam { name: "probeInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name:
  // "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData",
  // modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_ScatterTetrahedronCacheIndicesJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeInstances,
                                                                 ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache, ::UnityEngine::Rendering::CPUInstanceData instanceData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17682 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field probeInstances, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeInstances;

  /// @brief Field compactTetrahedronCache, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache;

  /// @brief Field instanceData, offset: 0x20, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, probeInstances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, compactTetrahedronCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, instanceData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, 0x100>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float4, UnityEngine.Matrix4x4, UnityEngine.Rendering.CPUInstanceData,
// UnityEngine.Rendering.CPUSharedInstanceData, UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.TransformUpdatePacket
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/TransformUpdateJob
struct CORDL_TYPE InstanceDataSystem_TransformUpdateJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x6674bd0, size 0x5a0, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_TransformUpdateJob();

  // Ctor Parameters [CppParam { name: "initialize", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableBoundingSpheres", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "localToWorldMatrices", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None }, CppParam { name: "prevLocalToWorldMatrices", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None }, CppParam { name: "atomicTransformQueueCount", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData",
  // modifiers: "", def_value: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None }, CppParam { name:
  // "transformUpdateInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "transformUpdateDataQueue",
  // ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>", modifiers: "", def_value: None }, CppParam { name: "boundingSpheresDataQueue", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_TransformUpdateJob(bool initialize, bool enableBoundingSpheres, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices,
                                                  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicTransformQueueCount,
                                                  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData, ::UnityEngine::Rendering::CPUInstanceData instanceData,
                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformUpdateInstanceQueue,
                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket> transformUpdateDataQueue,
                                                  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> boundingSpheresDataQueue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17683 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1f8 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x40) };

  /// @brief Field initialize, offset: 0x0, size: 0x1, def value: None
  bool initialize;

  /// @brief Field enableBoundingSpheres, offset: 0x1, size: 0x1, def value: None
  bool enableBoundingSpheres;

  /// @brief Field instances, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field localToWorldMatrices, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices;

  /// @brief Field prevLocalToWorldMatrices, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices;

  /// @brief Field atomicTransformQueueCount, offset: 0x38, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicTransformQueueCount;

  /// @brief Field sharedInstanceData, offset: 0x40, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  /// @brief Field instanceData, offset: 0xe8, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field transformUpdateInstanceQueue, offset: 0x1c8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformUpdateInstanceQueue;

  /// @brief Field transformUpdateDataQueue, offset: 0x1d8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket> transformUpdateDataQueue;

  /// @brief Field boundingSpheresDataQueue, offset: 0x1e8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> boundingSpheresDataQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, initialize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, enableBoundingSpheres) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, instances) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, localToWorldMatrices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, prevLocalToWorldMatrices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, atomicTransformQueueCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, sharedInstanceData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, instanceData) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, transformUpdateInstanceQueue) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, transformUpdateDataQueue) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, boundingSpheresDataQueue) == 0x1e8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, 0x1f8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.InstanceHandle, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/ProbesUpdateJob
struct CORDL_TYPE InstanceDataSystem_ProbesUpdateJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x6675170, size 0x298, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_ProbesUpdateJob();

  // Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name:
  // "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData",
  // modifiers: "", def_value: None }, CppParam { name: "atomicProbesQueueCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }, CppParam {
  // name: "probeInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "compactTetrahedronCache", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "probeQueryPosition", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>",
  // modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_ProbesUpdateJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances, ::UnityEngine::Rendering::CPUInstanceData instanceData,
                                               ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicProbesQueueCount,
                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeInstanceQueue,
                                               ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache,
                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> probeQueryPosition) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17684 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1d0 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x40) };

  /// @brief Field instances, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field instanceData, offset: 0x10, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field sharedInstanceData, offset: 0xf0, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  /// @brief Field atomicProbesQueueCount, offset: 0x198, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicProbesQueueCount;

  /// @brief Field probeInstanceQueue, offset: 0x1a0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeInstanceQueue;

  /// @brief Field compactTetrahedronCache, offset: 0x1b0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache;

  /// @brief Field probeQueryPosition, offset: 0x1c0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> probeQueryPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, instances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, instanceData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, sharedInstanceData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, atomicProbesQueueCount) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, probeInstanceQueue) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, compactTetrahedronCache) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, probeQueryPosition) == 0x1c0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, 0x1d0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/MotionUpdateJob
struct CORDL_TYPE InstanceDataSystem_MotionUpdateJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6675408, size 0x184, virtual true, abstract: false, final true
  inline void Execute(int32_t chunk_index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_MotionUpdateJob();

  // Ctor Parameters [CppParam { name: "queueWriteBase", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers:
  // "", def_value: None }, CppParam { name: "atomicUpdateQueueCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }, CppParam { name:
  // "transformUpdateInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_MotionUpdateJob(int32_t queueWriteBase, ::UnityEngine::Rendering::CPUInstanceData instanceData,
                                               ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicUpdateQueueCount,
                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformUpdateInstanceQueue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17685 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x10) };

  /// @brief Field queueWriteBase, offset: 0x0, size: 0x4, def value: None
  int32_t queueWriteBase;

  /// @brief Field instanceData, offset: 0x8, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field atomicUpdateQueueCount, offset: 0xe8, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicUpdateQueueCount;

  /// @brief Field transformUpdateInstanceQueue, offset: 0xf0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformUpdateInstanceQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob, queueWriteBase) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob, instanceData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob, atomicUpdateQueueCount) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob, transformUpdateInstanceQueue) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob, 0x100>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.GPUDrivenPackedRendererData, UnityEngine.Rendering.InstanceAllocators, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/ReallocateInstancesJob
struct CORDL_TYPE InstanceDataSystem_ReallocateInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x667558c, size 0x38c, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_ReallocateInstancesJob();

  // Ctor Parameters [CppParam { name: "implicitInstanceIndices", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }, CppParam { name: "packedRendererData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>", modifiers: "",
  // def_value: None }, CppParam { name: "instanceOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instanceCounts", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instanceAllocators", ty: "::UnityEngine::Rendering::InstanceAllocators", modifiers: "",
  // def_value: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty:
  // "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "rendererGroupInstanceMultiHash", ty:
  // "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_ReallocateInstancesJob(bool implicitInstanceIndices, ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> packedRendererData,
                                                      ::Unity::Collections::NativeArray_1<int32_t> instanceOffsets, ::Unity::Collections::NativeArray_1<int32_t> instanceCounts,
                                                      ::UnityEngine::Rendering::InstanceAllocators instanceAllocators, ::UnityEngine::Rendering::CPUInstanceData instanceData,
                                                      ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                      ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17686 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x250 };

  /// @brief Field implicitInstanceIndices, offset: 0x0, size: 0x1, def value: None
  bool implicitInstanceIndices;

  /// @brief Field rendererGroupIDs, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs;

  /// @brief Field packedRendererData, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> packedRendererData;

  /// @brief Field instanceOffsets, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instanceOffsets;

  /// @brief Field instanceCounts, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instanceCounts;

  /// @brief Field instanceAllocators, offset: 0x48, size: 0x60, def value: None
  ::UnityEngine::Rendering::InstanceAllocators instanceAllocators;

  /// @brief Field instanceData, offset: 0xa8, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field sharedInstanceData, offset: 0x188, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  /// @brief Field instances, offset: 0x230, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field rendererGroupInstanceMultiHash, offset: 0x240, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, implicitInstanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, rendererGroupIDs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, packedRendererData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, instanceOffsets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, instanceCounts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, instanceAllocators) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, instanceData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, sharedInstanceData) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, instances) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, rendererGroupInstanceMultiHash) == 0x240, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, 0x250>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.InstanceAllocators, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/FreeInstancesJob
struct CORDL_TYPE InstanceDataSystem_FreeInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x6675918, size 0x2f0, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_FreeInstancesJob();

  // Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name:
  // "instanceAllocators", ty: "::UnityEngine::Rendering::InstanceAllocators", modifiers: "", def_value: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData",
  // modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None }, CppParam { name:
  // "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_FreeInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                ::UnityEngine::Rendering::InstanceAllocators instanceAllocators, ::UnityEngine::Rendering::CPUInstanceData instanceData,
                                                ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
                                                ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x208 };

  /// @brief Field instances, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field instanceAllocators, offset: 0x10, size: 0x60, def value: None
  ::UnityEngine::Rendering::InstanceAllocators instanceAllocators;

  /// @brief Field instanceData, offset: 0x70, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field sharedInstanceData, offset: 0x150, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  /// @brief Field rendererGroupInstanceMultiHash, offset: 0x1f8, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob, instances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob, instanceAllocators) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob, instanceData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob, sharedInstanceData) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob, rendererGroupInstanceMultiHash) == 0x1f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob, 0x208>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.InstanceAllocators, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/FreeRendererGroupInstancesJob
struct CORDL_TYPE InstanceDataSystem_FreeRendererGroupInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x6675c08, size 0x268, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_FreeRendererGroupInstancesJob();

  // Ctor Parameters [CppParam { name: "rendererGroupsID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instanceAllocators", ty:
  // "::UnityEngine::Rendering::InstanceAllocators", modifiers: "", def_value: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None
  // }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None }, CppParam { name: "rendererGroupInstanceMultiHash", ty:
  // "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_FreeRendererGroupInstancesJob(
      ::Unity::Collections::NativeArray_1<int32_t> rendererGroupsID, ::UnityEngine::Rendering::InstanceAllocators instanceAllocators, ::UnityEngine::Rendering::CPUInstanceData instanceData,
      ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
      ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x208 };

  /// @brief Field rendererGroupsID, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererGroupsID;

  /// @brief Field instanceAllocators, offset: 0x10, size: 0x60, def value: None
  ::UnityEngine::Rendering::InstanceAllocators instanceAllocators;

  /// @brief Field instanceData, offset: 0x70, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field sharedInstanceData, offset: 0x150, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  /// @brief Field rendererGroupInstanceMultiHash, offset: 0x1f8, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> rendererGroupInstanceMultiHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob, rendererGroupsID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob, instanceAllocators) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob, instanceData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob, sharedInstanceData) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob, rendererGroupInstanceMultiHash) == 0x1f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob, 0x208>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.GPUDrivenRendererGroupData, UnityEngine.Rendering.GPUInstanceIndex, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/UpdateRendererInstancesJob
struct CORDL_TYPE InstanceDataSystem_UpdateRendererInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6675e70, size 0x3f0, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_UpdateRendererInstancesJob();

  // Ctor Parameters [CppParam { name: "implicitInstanceIndices", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rendererData", ty:
  // "::UnityEngine::Rendering::GPUDrivenRendererGroupData", modifiers: "", def_value: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "lodGroupDataMap", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None }, CppParam { name: "instanceData", ty:
  // "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "",
  // def_value: None }]
  constexpr InstanceDataSystem_UpdateRendererInstancesJob(bool implicitInstanceIndices, ::UnityEngine::Rendering::GPUDrivenRendererGroupData rendererData,
                                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                          ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataMap,
                                                          ::UnityEngine::Rendering::CPUInstanceData instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x370 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field implicitInstanceIndices, offset: 0x0, size: 0x1, def value: None
  bool implicitInstanceIndices;

  /// @brief Field rendererData, offset: 0x8, size: 0x1c0, def value: None
  ::UnityEngine::Rendering::GPUDrivenRendererGroupData rendererData;

  /// @brief Field instances, offset: 0x1c8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field lodGroupDataMap, offset: 0x1d8, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataMap;

  /// @brief Field instanceData, offset: 0x1e8, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field sharedInstanceData, offset: 0x2c8, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob, implicitInstanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob, rendererData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob, instances) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob, lodGroupDataMap) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob, instanceData) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob, sharedInstanceData) == 0x2c8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob, 0x370>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData::ReadOnly, UnityEngine.Rendering.CPUSharedInstanceData::ReadOnly, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/CollectInstancesLODGroupsAndMasksJob
struct CORDL_TYPE InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6676304, size 0x98, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob();

  // Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name:
  // "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty:
  // "::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly", modifiers: "", def_value: None }, CppParam { name: "lodGroupAndMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers:
  // "", def_value: None }]
  constexpr InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                    ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData,
                                                                    ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly sharedInstanceData,
                                                                    ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x198 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field instances, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field instanceData, offset: 0x10, size: 0xd8, def value: None
  ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData;

  /// @brief Field sharedInstanceData, offset: 0xe8, size: 0xa0, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly sharedInstanceData;

  /// @brief Field lodGroupAndMasks, offset: 0x188, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, instances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, instanceData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, sharedInstanceData) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, lodGroupAndMasks) == 0x188, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, 0x198>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.ParallelBitArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/GetVisibleNonProcessedTreeInstancesJob
struct CORDL_TYPE InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x667639c, size 0x288, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob();

  // Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty:
  // "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: None }, CppParam { name: "compactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "",
  // def_value: None }, CppParam { name: "becomeVisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "processedBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers:
  // "", def_value: None }, CppParam { name: "rendererIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "atomicTreeInstancesCount", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob(::UnityEngine::Rendering::CPUInstanceData instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData,
                                                                      ::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks, bool becomeVisible,
                                                                      ::UnityEngine::Rendering::ParallelBitArray processedBits, ::Unity::Collections::NativeArray_1<int32_t> rendererIDs,
                                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                      ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicTreeInstancesCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1f8 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x40) };

  /// @brief Field instanceData, offset: 0x0, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  /// @brief Field sharedInstanceData, offset: 0xe0, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData sharedInstanceData;

  /// @brief Field compactedVisibilityMasks, offset: 0x188, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks;

  /// @brief Field becomeVisible, offset: 0x1a8, size: 0x1, def value: None
  bool becomeVisible;

  /// @brief Field processedBits, offset: 0x1b0, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray processedBits;

  /// @brief Field rendererIDs, offset: 0x1d0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererIDs;

  /// @brief Field instances, offset: 0x1e0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field atomicTreeInstancesCount, offset: 0x1f0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicTreeInstancesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, instanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, sharedInstanceData) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, compactedVisibilityMasks) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, becomeVisible) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, processedBits) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, rendererIDs) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, instances) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, atomicTreeInstancesCount) == 0x1f0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, 0x1f8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.ParallelBitArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceDataSystem/UpdateCompactedInstanceVisibilityJob
struct CORDL_TYPE InstanceDataSystem_UpdateCompactedInstanceVisibilityJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x667669c, size 0xe4, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem_UpdateCompactedInstanceVisibilityJob();

  // Ctor Parameters [CppParam { name: "compactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name: "instanceData", ty:
  // "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: None }]
  constexpr InstanceDataSystem_UpdateCompactedInstanceVisibilityJob(::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks,
                                                                    ::UnityEngine::Rendering::CPUInstanceData instanceData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x40) };

  /// @brief Field compactedVisibilityMasks, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks;

  /// @brief Field instanceData, offset: 0x20, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData instanceData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob, compactedVisibilityMasks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob, instanceData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob, 0x100>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUInstanceData, UnityEngine.Rendering.CPUSharedInstanceData,
// UnityEngine.Rendering.InstanceAllocators, UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceDataSystem
class CORDL_TYPE InstanceDataSystem : public ::System::Object {
public:
  // Declarations
  using CalculateInterpolatedLightAndOcclusionProbesBatchJob = ::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob;

  using CollectInstancesLODGroupsAndMasksJob = ::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob;

  using ComputeInstancesOffsetAndResizeInstancesArrayJob = ::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob;

  using FreeInstancesJob = ::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob;

  using FreeRendererGroupInstancesJob = ::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob;

  using GetVisibleNonProcessedTreeInstancesJob = ::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob;

  using InstanceTransformUpdateIDs = ::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs;

  using InstanceWindDataUpdateIDs = ::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs;

  using MotionUpdateJob = ::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob;

  using ProbesUpdateJob = ::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob;

  using QueryRendererGroupInstancesCountJob = ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob;

  using QueryRendererGroupInstancesJob = ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob;

  using QueryRendererGroupInstancesMultiJob = ::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob;

  using QuerySortedMeshInstancesJob = ::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob;

  using ReallocateInstancesJob = ::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob;

  using ScatterTetrahedronCacheIndicesJob = ::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob;

  using TransformUpdateJob = ::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob;

  using UpdateCompactedInstanceVisibilityJob = ::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob;

  using UpdateRendererInstancesJob = ::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob;

  __declspec(property(get = get_aliveInstances)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> aliveInstances;

  __declspec(property(get = get_hasBoundingSpheres)) bool hasBoundingSpheres;

  __declspec(property(get = get_instanceData)) ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData;

  /// @brief Field m_BoundingSpheresUpdateDataQueueBuffer, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BoundingSpheresUpdateDataQueueBuffer,
                      put = __cordl_internal_set_m_BoundingSpheresUpdateDataQueueBuffer)) ::UnityEngine::ComputeBuffer* m_BoundingSpheresUpdateDataQueueBuffer;

  /// @brief Field m_EnableBoundingSpheres, offset 0x258, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableBoundingSpheres, put = __cordl_internal_set_m_EnableBoundingSpheres)) bool m_EnableBoundingSpheres;

  /// @brief Field m_InstanceAllocators, offset 0x10, size 0x60
  __declspec(property(get = __cordl_internal_get_m_InstanceAllocators, put = __cordl_internal_set_m_InstanceAllocators)) ::UnityEngine::Rendering::InstanceAllocators m_InstanceAllocators;

  /// @brief Field m_InstanceData, offset 0x118, size 0xe0
  __declspec(property(get = __cordl_internal_get_m_InstanceData, put = __cordl_internal_set_m_InstanceData)) ::UnityEngine::Rendering::CPUInstanceData m_InstanceData;

  /// @brief Field m_LODUpdateKernel, offset 0x228, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LODUpdateKernel, put = __cordl_internal_set_m_LODUpdateKernel)) int32_t m_LODUpdateKernel;

  /// @brief Field m_MotionUpdateKernel, offset 0x220, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MotionUpdateKernel, put = __cordl_internal_set_m_MotionUpdateKernel)) int32_t m_MotionUpdateKernel;

  /// @brief Field m_ProbeOcclusionUpdateDataQueueBuffer, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProbeOcclusionUpdateDataQueueBuffer,
                      put = __cordl_internal_set_m_ProbeOcclusionUpdateDataQueueBuffer)) ::UnityEngine::ComputeBuffer* m_ProbeOcclusionUpdateDataQueueBuffer;

  /// @brief Field m_ProbeUpdateDataQueueBuffer, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProbeUpdateDataQueueBuffer, put = __cordl_internal_set_m_ProbeUpdateDataQueueBuffer)) ::UnityEngine::ComputeBuffer* m_ProbeUpdateDataQueueBuffer;

  /// @brief Field m_ProbeUpdateKernel, offset 0x224, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ProbeUpdateKernel, put = __cordl_internal_set_m_ProbeUpdateKernel)) int32_t m_ProbeUpdateKernel;

  /// @brief Field m_RendererGroupInstanceMultiHash, offset 0x1f8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_RendererGroupInstanceMultiHash,
                      put = __cordl_internal_set_m_RendererGroupInstanceMultiHash)) ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>
      m_RendererGroupInstanceMultiHash;

  /// @brief Field m_ScratchWindParamAddressArray, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScratchWindParamAddressArray, put = __cordl_internal_set_m_ScratchWindParamAddressArray)) ::ArrayW<int32_t, ::Array<int32_t>*>
      m_ScratchWindParamAddressArray;

  /// @brief Field m_SharedInstanceData, offset 0x70, size 0xa8
  __declspec(property(get = __cordl_internal_get_m_SharedInstanceData, put = __cordl_internal_set_m_SharedInstanceData)) ::UnityEngine::Rendering::CPUSharedInstanceData m_SharedInstanceData;

  /// @brief Field m_TransformInitKernel, offset 0x218, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransformInitKernel, put = __cordl_internal_set_m_TransformInitKernel)) int32_t m_TransformInitKernel;

  /// @brief Field m_TransformUpdateCS, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformUpdateCS, put = __cordl_internal_set_m_TransformUpdateCS)) ::UnityW<::UnityEngine::ComputeShader> m_TransformUpdateCS;

  /// @brief Field m_TransformUpdateDataQueueBuffer, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformUpdateDataQueueBuffer,
                      put = __cordl_internal_set_m_TransformUpdateDataQueueBuffer)) ::UnityEngine::ComputeBuffer* m_TransformUpdateDataQueueBuffer;

  /// @brief Field m_TransformUpdateKernel, offset 0x21c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransformUpdateKernel, put = __cordl_internal_set_m_TransformUpdateKernel)) int32_t m_TransformUpdateKernel;

  /// @brief Field m_UpdateIndexQueueBuffer, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateIndexQueueBuffer, put = __cordl_internal_set_m_UpdateIndexQueueBuffer)) ::UnityEngine::ComputeBuffer* m_UpdateIndexQueueBuffer;

  /// @brief Field m_WindDataCopyHistoryKernel, offset 0x22c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WindDataCopyHistoryKernel, put = __cordl_internal_set_m_WindDataCopyHistoryKernel)) int32_t m_WindDataCopyHistoryKernel;

  /// @brief Field m_WindDataUpdateCS, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WindDataUpdateCS, put = __cordl_internal_set_m_WindDataUpdateCS)) ::UnityW<::UnityEngine::ComputeShader> m_WindDataUpdateCS;

  __declspec(property(get = get_sharedInstanceData)) ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly sharedInstanceData;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AtomicAddLengthNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t AtomicAddLengthNoResize(::ByRef<::Unity::Collections::NativeList_1<T>> list, int32_t count);

  /// @brief Method DispatchMotionUpdateCommand, addr 0x66717bc, size 0x288, virtual false, abstract: false, final false
  inline void DispatchMotionUpdateCommand(int32_t motionQueueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformInstanceQueue,
                                          ::UnityEngine::Rendering::RenderersParameters renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method DispatchProbeUpdateCommand, addr 0x66714c4, size 0x2f8, virtual false, abstract: false, final false
  inline void DispatchProbeUpdateCommand(int32_t queueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeInstanceQueue,
                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> probeUpdateDataQueue,
                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> probeOcclusionUpdateDataQueue, ::UnityEngine::Rendering::RenderersParameters renderersParameters,
                                         ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method DispatchTransformUpdateCommand, addr 0x6671a44, size 0x3c0, virtual false, abstract: false, final false
  inline void DispatchTransformUpdateCommand(bool initialize, int32_t transformQueueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> transformInstanceQueue,
                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket> updateDataQueue,
                                             ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> boundingSphereUpdateDataQueue,
                                             ::UnityEngine::Rendering::RenderersParameters renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method DispatchWindDataCopyHistoryCommand, addr 0x6671e04, size 0x264, virtual false, abstract: false, final false
  inline void DispatchWindDataCopyHistoryCommand(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices,
                                                 ::UnityEngine::Rendering::RenderersParameters renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method Dispose, addr 0x6670ecc, size 0xc0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnsureIndexQueueBufferCapacity, addr 0x6670fdc, size 0x9c, virtual false, abstract: false, final false
  inline void EnsureIndexQueueBufferCapacity(int32_t capacity);

  /// @brief Method EnsureProbeBuffersCapacity, addr 0x6671078, size 0x154, virtual false, abstract: false, final false
  inline void EnsureProbeBuffersCapacity(int32_t capacity);

  /// @brief Method EnsureTransformBuffersCapacity, addr 0x66711cc, size 0x178, virtual false, abstract: false, final false
  inline void EnsureTransformBuffersCapacity(int32_t capacity);

  /// @brief Method FreeInstances, addr 0x6672efc, size 0xb8, virtual false, abstract: false, final false
  inline void FreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method FreeRendererGroupInstances, addr 0x6672e44, size 0xb8, virtual false, abstract: false, final false
  inline void FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t> rendererGroupsID);

  /// @brief Method GetAliveInstancesOfType, addr 0x6670fb4, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetAliveInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method GetMaxInstancesOfType, addr 0x6670f8c, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetMaxInstancesOfType(::UnityEngine::Rendering::InstanceType instanceType);

  /// @brief Method GetVisibleTreeInstances, addr 0x6673a40, size 0x3d8, virtual false, abstract: false, final false
  inline void GetVisibleTreeInstances(::ByRef<::UnityEngine::Rendering::ParallelBitArray> compactedVisibilityMasks, ::ByRef<::UnityEngine::Rendering::ParallelBitArray> processedBits,
                                      ::Unity::Collections::NativeList_1<int32_t> visibeTreeRendererIDs,
                                      ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> visibeTreeInstances, bool becomeVisibleOnly,
                                      ::ByRef<int32_t> becomeVisibeTreeInstancesCount);

  /// @brief Method InitializeInstanceTransforms, addr 0x6673174, size 0x48, virtual false, abstract: false, final false
  inline void InitializeInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices,
                                           ::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method InternalSanityCheckStates, addr 0x66737c8, size 0x278, virtual false, abstract: false, final false
  inline bool InternalSanityCheckStates();

  static inline ::UnityEngine::Rendering::InstanceDataSystem* New_ctor(int32_t maxInstances, bool enableBoundingSpheres, ::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Method ReallocateAndGetInstances, addr 0x6672b70, size 0x2d4, virtual false, abstract: false, final false
  inline void ReallocateAndGetInstances(::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleCollectInstancesLODGroupAndMasksJob, addr 0x66736cc, size 0xfc, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleCollectInstancesLODGroupAndMasksJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                              ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks);

  /// @brief Method ScheduleInterpolateProbesAndUpdateTetrahedronCache, addr 0x6671344, size 0x180, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleInterpolateProbesAndUpdateTetrahedronCache(int32_t queueCount,
                                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> probeUpdateInstanceQueue,
                                                                                     ::Unity::Collections::NativeArray_1<int32_t> compactTetrahedronCache,
                                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> probeQueryPosition,
                                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2> probeUpdateDataQueue,
                                                                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> probeOcclusionUpdateDataQueue);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x6673214, size 0xb0, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x66732c4, size 0x11c, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x66733e0, size 0x1dc, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> instancesOffset,
                                                                         ::Unity::Collections::NativeArray_1<int32_t> instancesCount,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQuerySortedMeshInstancesJob, addr 0x66735bc, size 0x110, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQuerySortedMeshInstancesJob(::Unity::Collections::NativeArray_1<int32_t> sortedMeshIDs,
                                                                      ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleUpdateInstanceDataJob, addr 0x6672fb4, size 0x12c, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleUpdateInstanceDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                ::ByRef<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData,
                                                                ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataMap);

  /// @brief Method UpdateAllInstanceProbes, addr 0x66730e0, size 0x94, virtual false, abstract: false, final false
  inline void UpdateAllInstanceProbes(::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method UpdateInstanceMotions, addr 0x6673200, size 0x14, virtual false, abstract: false, final false
  inline void UpdateInstanceMotions(::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method UpdateInstanceMotionsData, addr 0x6672068, size 0x1d0, virtual false, abstract: false, final false
  inline void UpdateInstanceMotionsData(::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method UpdateInstanceProbesData, addr 0x66727a8, size 0x368, virtual false, abstract: false, final false
  inline void UpdateInstanceProbesData(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                       ::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method UpdateInstanceTransforms, addr 0x66731bc, size 0x44, virtual false, abstract: false, final false
  inline void UpdateInstanceTransforms(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices, ::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters,
                                       ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method UpdateInstanceTransformsData, addr 0x6672238, size 0x570, virtual false, abstract: false, final false
  inline void UpdateInstanceTransformsData(bool initialize, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                           ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrices,
                                           ::ByRef<::UnityEngine::Rendering::RenderersParameters> renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method UpdateInstanceWindDataHistory, addr 0x6672b10, size 0x60, virtual false, abstract: false, final false
  inline void UpdateInstanceWindDataHistory(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> gpuInstanceIndices,
                                            ::UnityEngine::Rendering::RenderersParameters renderersParameters, ::UnityEngine::Rendering::GPUInstanceDataBuffer* outputBuffer);

  /// @brief Method UpdatePerFrameInstanceVisibility, addr 0x6673e18, size 0xc4, virtual false, abstract: false, final false
  inline void UpdatePerFrameInstanceVisibility(::ByRef<::UnityEngine::Rendering::ParallelBitArray> compactedVisibilityMasks);

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_BoundingSpheresUpdateDataQueueBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_BoundingSpheresUpdateDataQueueBuffer();

  constexpr bool const& __cordl_internal_get_m_EnableBoundingSpheres() const;

  constexpr bool& __cordl_internal_get_m_EnableBoundingSpheres();

  constexpr ::UnityEngine::Rendering::InstanceAllocators const& __cordl_internal_get_m_InstanceAllocators() const;

  constexpr ::UnityEngine::Rendering::InstanceAllocators& __cordl_internal_get_m_InstanceAllocators();

  constexpr ::UnityEngine::Rendering::CPUInstanceData const& __cordl_internal_get_m_InstanceData() const;

  constexpr ::UnityEngine::Rendering::CPUInstanceData& __cordl_internal_get_m_InstanceData();

  constexpr int32_t const& __cordl_internal_get_m_LODUpdateKernel() const;

  constexpr int32_t& __cordl_internal_get_m_LODUpdateKernel();

  constexpr int32_t const& __cordl_internal_get_m_MotionUpdateKernel() const;

  constexpr int32_t& __cordl_internal_get_m_MotionUpdateKernel();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_ProbeOcclusionUpdateDataQueueBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_ProbeOcclusionUpdateDataQueueBuffer();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_ProbeUpdateDataQueueBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_ProbeUpdateDataQueueBuffer();

  constexpr int32_t const& __cordl_internal_get_m_ProbeUpdateKernel() const;

  constexpr int32_t& __cordl_internal_get_m_ProbeUpdateKernel();

  constexpr ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> const& __cordl_internal_get_m_RendererGroupInstanceMultiHash() const;

  constexpr ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle>& __cordl_internal_get_m_RendererGroupInstanceMultiHash();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_ScratchWindParamAddressArray() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_ScratchWindParamAddressArray();

  constexpr ::UnityEngine::Rendering::CPUSharedInstanceData const& __cordl_internal_get_m_SharedInstanceData() const;

  constexpr ::UnityEngine::Rendering::CPUSharedInstanceData& __cordl_internal_get_m_SharedInstanceData();

  constexpr int32_t const& __cordl_internal_get_m_TransformInitKernel() const;

  constexpr int32_t& __cordl_internal_get_m_TransformInitKernel();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_TransformUpdateCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_TransformUpdateCS();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_TransformUpdateDataQueueBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_TransformUpdateDataQueueBuffer();

  constexpr int32_t const& __cordl_internal_get_m_TransformUpdateKernel() const;

  constexpr int32_t& __cordl_internal_get_m_TransformUpdateKernel();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_UpdateIndexQueueBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_UpdateIndexQueueBuffer();

  constexpr int32_t const& __cordl_internal_get_m_WindDataCopyHistoryKernel() const;

  constexpr int32_t& __cordl_internal_get_m_WindDataCopyHistoryKernel();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_WindDataUpdateCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_WindDataUpdateCS();

  constexpr void __cordl_internal_set_m_BoundingSpheresUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_EnableBoundingSpheres(bool value);

  constexpr void __cordl_internal_set_m_InstanceAllocators(::UnityEngine::Rendering::InstanceAllocators value);

  constexpr void __cordl_internal_set_m_InstanceData(::UnityEngine::Rendering::CPUInstanceData value);

  constexpr void __cordl_internal_set_m_LODUpdateKernel(int32_t value);

  constexpr void __cordl_internal_set_m_MotionUpdateKernel(int32_t value);

  constexpr void __cordl_internal_set_m_ProbeOcclusionUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_ProbeUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_ProbeUpdateKernel(int32_t value);

  constexpr void __cordl_internal_set_m_RendererGroupInstanceMultiHash(::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> value);

  constexpr void __cordl_internal_set_m_ScratchWindParamAddressArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_SharedInstanceData(::UnityEngine::Rendering::CPUSharedInstanceData value);

  constexpr void __cordl_internal_set_m_TransformInitKernel(int32_t value);

  constexpr void __cordl_internal_set_m_TransformUpdateCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_TransformUpdateDataQueueBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_TransformUpdateKernel(int32_t value);

  constexpr void __cordl_internal_set_m_UpdateIndexQueueBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_WindDataCopyHistoryKernel(int32_t value);

  constexpr void __cordl_internal_set_m_WindDataUpdateCS(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x6670c84, size 0x248, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxInstances, bool enableBoundingSpheres, ::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Method get_aliveInstances, addr 0x6670c2c, size 0x58, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> get_aliveInstances();

  /// @brief Method get_hasBoundingSpheres, addr 0x6670b84, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasBoundingSpheres();

  /// @brief Method get_instanceData, addr 0x6670b8c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUInstanceData_ReadOnly get_instanceData();

  /// @brief Method get_sharedInstanceData, addr 0x6670bdc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly get_sharedInstanceData();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDataSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDataSystem(InstanceDataSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDataSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDataSystem(InstanceDataSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17693 };

  /// @brief Field m_InstanceAllocators, offset: 0x10, size: 0x60, def value: None
  ::UnityEngine::Rendering::InstanceAllocators ___m_InstanceAllocators;

  /// @brief Field m_SharedInstanceData, offset: 0x70, size: 0xa8, def value: None
  ::UnityEngine::Rendering::CPUSharedInstanceData ___m_SharedInstanceData;

  /// @brief Field m_InstanceData, offset: 0x118, size: 0xe0, def value: None
  ::UnityEngine::Rendering::CPUInstanceData ___m_InstanceData;

  /// @brief Field m_RendererGroupInstanceMultiHash, offset: 0x1f8, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceHandle> ___m_RendererGroupInstanceMultiHash;

  /// @brief Field m_TransformUpdateCS, offset: 0x208, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_TransformUpdateCS;

  /// @brief Field m_WindDataUpdateCS, offset: 0x210, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_WindDataUpdateCS;

  /// @brief Field m_TransformInitKernel, offset: 0x218, size: 0x4, def value: None
  int32_t ___m_TransformInitKernel;

  /// @brief Field m_TransformUpdateKernel, offset: 0x21c, size: 0x4, def value: None
  int32_t ___m_TransformUpdateKernel;

  /// @brief Field m_MotionUpdateKernel, offset: 0x220, size: 0x4, def value: None
  int32_t ___m_MotionUpdateKernel;

  /// @brief Field m_ProbeUpdateKernel, offset: 0x224, size: 0x4, def value: None
  int32_t ___m_ProbeUpdateKernel;

  /// @brief Field m_LODUpdateKernel, offset: 0x228, size: 0x4, def value: None
  int32_t ___m_LODUpdateKernel;

  /// @brief Field m_WindDataCopyHistoryKernel, offset: 0x22c, size: 0x4, def value: None
  int32_t ___m_WindDataCopyHistoryKernel;

  /// @brief Field m_UpdateIndexQueueBuffer, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_UpdateIndexQueueBuffer;

  /// @brief Field m_ProbeUpdateDataQueueBuffer, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_ProbeUpdateDataQueueBuffer;

  /// @brief Field m_ProbeOcclusionUpdateDataQueueBuffer, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_ProbeOcclusionUpdateDataQueueBuffer;

  /// @brief Field m_TransformUpdateDataQueueBuffer, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_TransformUpdateDataQueueBuffer;

  /// @brief Field m_BoundingSpheresUpdateDataQueueBuffer, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_BoundingSpheresUpdateDataQueueBuffer;

  /// @brief Field m_EnableBoundingSpheres, offset: 0x258, size: 0x1, def value: None
  bool ___m_EnableBoundingSpheres;

  /// @brief Field m_ScratchWindParamAddressArray, offset: 0x260, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_ScratchWindParamAddressArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_InstanceAllocators) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_SharedInstanceData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_InstanceData) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_RendererGroupInstanceMultiHash) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_TransformUpdateCS) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_WindDataUpdateCS) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_TransformInitKernel) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_TransformUpdateKernel) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_MotionUpdateKernel) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_ProbeUpdateKernel) == 0x224, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_LODUpdateKernel) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_WindDataCopyHistoryKernel) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_UpdateIndexQueueBuffer) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_ProbeUpdateDataQueueBuffer) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_ProbeOcclusionUpdateDataQueueBuffer) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_TransformUpdateDataQueueBuffer) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_BoundingSpheresUpdateDataQueueBuffer) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_EnableBoundingSpheres) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceDataSystem, ___m_ScratchWindParamAddressArray) == 0x260, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceDataSystem, 0x268>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::InstanceDataSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem*, "UnityEngine.Rendering", "InstanceDataSystem");
NEED_NO_BOX(::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_InstanceTransformUpdateIDs*, "UnityEngine.Rendering", "InstanceDataSystem/InstanceTransformUpdateIDs");
NEED_NO_BOX(::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_InstanceWindDataUpdateIDs*, "UnityEngine.Rendering", "InstanceDataSystem/InstanceWindDataUpdateIDs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob, "UnityEngine.Rendering",
                       "InstanceDataSystem/CalculateInterpolatedLightAndOcclusionProbesBatchJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob, "UnityEngine.Rendering", "InstanceDataSystem/CollectInstancesLODGroupsAndMasksJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob, "UnityEngine.Rendering",
                       "InstanceDataSystem/ComputeInstancesOffsetAndResizeInstancesArrayJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_FreeInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/FreeInstancesJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_FreeRendererGroupInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/FreeRendererGroupInstancesJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_GetVisibleNonProcessedTreeInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/GetVisibleNonProcessedTreeInstancesJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_MotionUpdateJob, "UnityEngine.Rendering", "InstanceDataSystem/MotionUpdateJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_ProbesUpdateJob, "UnityEngine.Rendering", "InstanceDataSystem/ProbesUpdateJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesCountJob, "UnityEngine.Rendering", "InstanceDataSystem/QueryRendererGroupInstancesCountJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/QueryRendererGroupInstancesJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_QueryRendererGroupInstancesMultiJob, "UnityEngine.Rendering", "InstanceDataSystem/QueryRendererGroupInstancesMultiJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_QuerySortedMeshInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/QuerySortedMeshInstancesJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_ReallocateInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/ReallocateInstancesJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob, "UnityEngine.Rendering", "InstanceDataSystem/ScatterTetrahedronCacheIndicesJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_TransformUpdateJob, "UnityEngine.Rendering", "InstanceDataSystem/TransformUpdateJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob, "UnityEngine.Rendering", "InstanceDataSystem/UpdateCompactedInstanceVisibilityJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceDataSystem_UpdateRendererInstancesJob, "UnityEngine.Rendering", "InstanceDataSystem/UpdateRendererInstancesJob");
