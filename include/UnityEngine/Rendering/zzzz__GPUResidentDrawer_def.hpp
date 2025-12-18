#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUResidentDrawer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeHashSet_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Jobs {
class IJobParallelForBatch;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor;
}
namespace UnityEngine::Rendering {
class GPUResidentBatcher;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawerSettings;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_ClassifyMaterialsJob;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_FindRenderersFromMaterialJob;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_FindUnsupportedRenderersJob;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawer_Strings;
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
struct OcclusionCullingSettings;
}
namespace UnityEngine::Rendering {
struct RenderRequestBatcherContext;
}
namespace UnityEngine::Rendering {
class RenderersBatchersContext;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct SubviewOcclusionTest;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class ObjectDispatcher;
}
namespace UnityEngine {
struct TypeDispatchData;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUResidentDrawer;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawer_Strings;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_ClassifyMaterialsJob;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_FindRenderersFromMaterialJob;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_FindUnsupportedRenderersJob;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUResidentDrawer);
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUResidentDrawer_Strings);
MARK_VAL_T(::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob);
MARK_VAL_T(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob);
MARK_VAL_T(::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob);
MARK_VAL_T(::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob);
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2::ReadOnly<TKey, TValue>,
// UnityEngine.Rendering.BatchMaterialID, UnityEngine.Rendering.GPUDrivenPackedMaterialData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawer/ClassifyMaterialsJob
struct CORDL_TYPE GPUResidentDrawer_ClassifyMaterialsJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x665e288, size 0x460, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawer_ClassifyMaterialsJob();

  // Ctor Parameters [CppParam { name: "batchMaterialHash", ty: "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>", modifiers: "", def_value:
  // None }, CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "supportedMaterialIDs", ty:
  // "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "unsupportedMaterialIDs", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "supportedPackedMaterialDatas", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None
  // }]
  constexpr GPUResidentDrawer_ClassifyMaterialsJob(::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMaterialID> batchMaterialHash,
                                                   ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs, ::Unity::Collections::NativeList_1<int32_t> supportedMaterialIDs,
                                                   ::Unity::Collections::NativeList_1<int32_t> unsupportedMaterialIDs,
                                                   ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> supportedPackedMaterialDatas) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field batchMaterialHash, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMaterialID> batchMaterialHash;

  /// @brief Field materialIDs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs;

  /// @brief Field supportedMaterialIDs, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> supportedMaterialIDs;

  /// @brief Field unsupportedMaterialIDs, offset: 0x28, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> unsupportedMaterialIDs;

  /// @brief Field supportedPackedMaterialDatas, offset: 0x30, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> supportedPackedMaterialDatas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob, batchMaterialHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob, materialIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob, supportedMaterialIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob, unsupportedMaterialIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob, supportedPackedMaterialDatas) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.SmallIntegerArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawer/FindUnsupportedRenderersJob
struct CORDL_TYPE GPUResidentDrawer_FindUnsupportedRenderersJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x665e6e8, size 0x1d4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawer_FindUnsupportedRenderersJob();

  // Ctor Parameters [CppParam { name: "unsupportedMaterials", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialIDArrays", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: None }, CppParam { name: "rendererGroups", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "unsupportedRenderers", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers:
  // "", def_value: None }]
  constexpr GPUResidentDrawer_FindUnsupportedRenderersJob(::Unity::Collections::NativeArray_1_ReadOnly<int32_t> unsupportedMaterials,
                                                          ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays,
                                                          ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroups,
                                                          ::Unity::Collections::NativeList_1<int32_t> unsupportedRenderers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field unsupportedMaterials, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> unsupportedMaterials;

  /// @brief Field materialIDArrays, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays;

  /// @brief Field rendererGroups, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroups;

  /// @brief Field unsupportedRenderers, offset: 0x30, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> unsupportedRenderers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob, unsupportedMaterials) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob, materialIDArrays) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob, rendererGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob, unsupportedRenderers) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, Unity.Collections.NativeHashSet`1::ReadOnly<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, UnityEngine.Rendering.SmallIntegerArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawer/FindRenderersFromMaterialJob
struct CORDL_TYPE GPUResidentDrawer_FindRenderersFromMaterialJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x665e8bc, size 0x2cc, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawer_FindRenderersFromMaterialJob();

  // Ctor Parameters [CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeHashSet_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialIDArrays", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: None }, CppParam { name: "rendererGroupIDs", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "sortedExcludeRendererIDs", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "selectedRenderGroups", ty:
  // "::Unity::Collections::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: None }]
  constexpr GPUResidentDrawer_FindRenderersFromMaterialJob(::Unity::Collections::NativeHashSet_1_ReadOnly<int32_t> materialIDs,
                                                           ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays,
                                                           ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroupIDs,
                                                           ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> sortedExcludeRendererIDs,
                                                           ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> selectedRenderGroups) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field materialIDs, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeHashSet_1_ReadOnly<int32_t> materialIDs;

  /// @brief Field materialIDArrays, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays;

  /// @brief Field rendererGroupIDs, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroupIDs;

  /// @brief Field sortedExcludeRendererIDs, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> sortedExcludeRendererIDs;

  /// @brief Field selectedRenderGroups, offset: 0x38, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> selectedRenderGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob, materialIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob, materialIDArrays) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob, rendererGroupIDs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob, sortedExcludeRendererIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob, selectedRenderGroups) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, Unity.Collections.NativeHashSet`1<T>, Unity.Collections.NativeParallelHashMap`2::ReadOnly<TKey, TValue>,
// UnityEngine.Rendering.GPUDrivenPackedMaterialData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawer/GetMaterialsWithChangedPackedMaterialJob
struct CORDL_TYPE GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x665eb88, size 0x164, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob();

  // Ctor Parameters [CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "packedMaterialDatas", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None }, CppParam { name: "packedMaterialHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None }, CppParam { name: "filteredMaterials",
  // ty: "::Unity::Collections::NativeHashSet_1<int32_t>", modifiers: "", def_value: None }]
  constexpr GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob(
      ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas,
      ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialHash,
      ::Unity::Collections::NativeHashSet_1<int32_t> filteredMaterials) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17587 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field materialIDs, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs;

  /// @brief Field packedMaterialDatas, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas;

  /// @brief Field packedMaterialHash, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialHash;

  /// @brief Field filteredMaterials, offset: 0x30, size: 0x8, def value: None
  ::Unity::Collections::NativeHashSet_1<int32_t> filteredMaterials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob, materialIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob, packedMaterialDatas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob, packedMaterialHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob, filteredMaterials) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawer/Strings
class CORDL_TYPE GPUResidentDrawer_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field allowInEditModeDisabled, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_allowInEditModeDisabled, put = setStaticF_allowInEditModeDisabled)) ::StringW allowInEditModeDisabled;

  /// @brief Field batchRendererGroupShaderStrippingModeInvalid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_batchRendererGroupShaderStrippingModeInvalid,
                      put = setStaticF_batchRendererGroupShaderStrippingModeInvalid)) ::StringW batchRendererGroupShaderStrippingModeInvalid;

  /// @brief Field drawerModeDisabled, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_drawerModeDisabled, put = setStaticF_drawerModeDisabled)) ::StringW drawerModeDisabled;

  /// @brief Field kernelNotPresent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kernelNotPresent, put = setStaticF_kernelNotPresent)) ::StringW kernelNotPresent;

  /// @brief Field notGPUResidentRenderPipeline, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_notGPUResidentRenderPipeline, put = setStaticF_notGPUResidentRenderPipeline)) ::StringW notGPUResidentRenderPipeline;

  /// @brief Field rawBufferNotSupportedByPlatform, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rawBufferNotSupportedByPlatform, put = setStaticF_rawBufferNotSupportedByPlatform)) ::StringW rawBufferNotSupportedByPlatform;

  static inline ::StringW getStaticF_allowInEditModeDisabled();

  static inline ::StringW getStaticF_batchRendererGroupShaderStrippingModeInvalid();

  static inline ::StringW getStaticF_drawerModeDisabled();

  static inline ::StringW getStaticF_kernelNotPresent();

  static inline ::StringW getStaticF_notGPUResidentRenderPipeline();

  static inline ::StringW getStaticF_rawBufferNotSupportedByPlatform();

  static inline void setStaticF_allowInEditModeDisabled(::StringW value);

  static inline void setStaticF_batchRendererGroupShaderStrippingModeInvalid(::StringW value);

  static inline void setStaticF_drawerModeDisabled(::StringW value);

  static inline void setStaticF_kernelNotPresent(::StringW value);

  static inline void setStaticF_notGPUResidentRenderPipeline(::StringW value);

  static inline void setStaticF_rawBufferNotSupportedByPlatform(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawer_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawer_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawer_Strings(GPUResidentDrawer_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawer_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawer_Strings(GPUResidentDrawer_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawer_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object, UnityEngine.Rendering.GPUResidentDrawerSettings
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawer
class CORDL_TYPE GPUResidentDrawer : public ::System::Object {
public:
  // Declarations
  using ClassifyMaterialsJob = ::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob;

  using FindRenderersFromMaterialJob = ::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob;

  using FindUnsupportedRenderersJob = ::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob;

  using GetMaterialsWithChangedPackedMaterialJob = ::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob;

  using Strings = ::UnityEngine::Rendering::GPUResidentDrawer_Strings;

  __declspec(property(get = get_batcher)) ::UnityEngine::Rendering::GPUResidentBatcher* batcher;

  /// @brief Field m_Batcher, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Batcher, put = __cordl_internal_set_m_Batcher)) ::UnityEngine::Rendering::GPUResidentBatcher* m_Batcher;

  /// @brief Field m_BatchersContext, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BatchersContext, put = __cordl_internal_set_m_BatchersContext)) ::UnityEngine::Rendering::RenderersBatchersContext* m_BatchersContext;

  /// @brief Field m_ContextIntPtr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContextIntPtr, put = __cordl_internal_set_m_ContextIntPtr)) ::System::IntPtr m_ContextIntPtr;

  /// @brief Field m_Dispatcher, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dispatcher, put = __cordl_internal_set_m_Dispatcher)) ::UnityEngine::ObjectDispatcher* m_Dispatcher;

  /// @brief Field m_GPUDrivenProcessor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GPUDrivenProcessor, put = __cordl_internal_set_m_GPUDrivenProcessor)) ::UnityEngine::Rendering::GPUDrivenProcessor* m_GPUDrivenProcessor;

  /// @brief Field m_Settings, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::GPUResidentDrawerSettings m_Settings;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::Rendering::GPUResidentDrawer* s_Instance;

  __declspec(property(get = get_settings)) ::UnityEngine::Rendering::GPUResidentDrawerSettings settings;

  /// @brief Method AppendNewInstance, addr 0x665e11c, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceHandle AppendNewInstance(int32_t rendererGroupID, ::ByRef<::UnityEngine::Matrix4x4> instanceTransform);

  /// @brief Method ClassifyMaterials, addr 0x665d0b4, size 0x1c4, virtual false, abstract: false, final false
  inline void ClassifyMaterials(::Unity::Collections::NativeArray_1<int32_t> materials, ::ByRef<::Unity::Collections::NativeList_1<int32_t>> unsupportedMaterials,
                                ::ByRef<::Unity::Collections::NativeList_1<int32_t>> supportedMaterials,
                                ::ByRef<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>> supportedPackedMaterialDatas,
                                ::Unity::Collections::Allocator allocator);

  /// @brief Method CleanUp, addr 0x665c0e4, size 0x60, virtual false, abstract: false, final false
  static inline void CleanUp();

  /// @brief Method Dispose, addr 0x665c144, size 0x29c, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FindRenderersFromMaterials, addr 0x665dda4, size 0x1fc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1<int32_t> FindRenderersFromMaterials(::Unity::Collections::NativeArray_1<int32_t> sortedExcludeRenderers,
                                                                                ::Unity::Collections::NativeHashSet_1<int32_t> materials, ::Unity::Collections::Allocator rendererListAllocator);

  /// @brief Method FindUnsupportedRenderers, addr 0x665d278, size 0x124, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1<int32_t> FindUnsupportedRenderers(::Unity::Collections::NativeArray_1<int32_t> unsupportedMaterials);

  /// @brief Method FreeInstances, addr 0x665e0c4, size 0x58, virtual false, abstract: false, final false
  inline void FreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method FreeRendererGroupInstances, addr 0x665dfc4, size 0xe8, virtual false, abstract: false, final false
  inline void FreeRendererGroupInstances(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> unsupportedRendererGroupIDs);

  /// @brief Method GetDebugStats, addr 0x6653af0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugRendererBatcherStats* GetDebugStats();

  /// @brief Method GetGlobalSettingsFromRPAsset, addr 0x6657714, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUResidentDrawerSettings GetGlobalSettingsFromRPAsset();

  /// @brief Method GetMaterialsWithChangedPackedMaterial, addr 0x665dc20, size 0x184, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeHashSet_1<int32_t>
  GetMaterialsWithChangedPackedMaterial(::Unity::Collections::NativeArray_1<int32_t> materials,
                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas, ::Unity::Collections::Allocator allocator);

  /// @brief Method InsertIntoPlayerLoop, addr 0x665b8ec, size 0x424, virtual false, abstract: false, final false
  inline void InsertIntoPlayerLoop();

  /// @brief Method InstanceOcclusionTest, addr 0x665b608, size 0xa0, virtual false, abstract: false, final false
  static inline void InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                           ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests);

  /// @brief Method IsEnabled, addr 0x6657a68, size 0x54, virtual false, abstract: false, final false
  static inline bool IsEnabled();

  /// @brief Method IsForcedOnViaCommandLine, addr 0x665bfec, size 0x8, virtual false, abstract: false, final false
  static inline bool IsForcedOnViaCommandLine();

  /// @brief Method IsGPUResidentDrawerSupportedBySRP, addr 0x6657870, size 0x1a4, virtual false, abstract: false, final false
  static inline bool IsGPUResidentDrawerSupportedBySRP(::UnityEngine::Rendering::GPUResidentDrawerSettings settings, ::ByRef<::StringW> message, ::ByRef<::UnityEngine::LogType> severity);

  /// @brief Method IsInstanceOcclusionCullingEnabled, addr 0x665b4d0, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsInstanceOcclusionCullingEnabled();

  /// @brief Method IsOcclusionForcedOnViaCommandLine, addr 0x665bff4, size 0x8, virtual false, abstract: false, final false
  static inline bool IsOcclusionForcedOnViaCommandLine();

  /// @brief Method IsProjectSupported, addr 0x665e19c, size 0x24, virtual false, abstract: false, final false
  static inline bool IsProjectSupported();

  /// @brief Method IsProjectSupported, addr 0x665e1c0, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsProjectSupported(::ByRef<::StringW> message, ::ByRef<::UnityEngine::LogType> severity);

  /// @brief Method LogMessage, addr 0x665c9b8, size 0xb8, virtual false, abstract: false, final false
  static inline void LogMessage(::StringW message, ::UnityEngine::LogType severity);

  static inline ::UnityEngine::Rendering::GPUResidentDrawer* New_ctor(::UnityEngine::Rendering::GPUResidentDrawerSettings settings, int32_t maxInstanceCount, int32_t maxTreeInstanceCount);

  /// @brief Method OnBeginCameraRendering, addr 0x665d04c, size 0x34, virtual false, abstract: false, final false
  inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method OnBeginContextRendering, addr 0x665cea4, size 0xe8, virtual false, abstract: false, final false
  inline void OnBeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method OnEndCameraRendering, addr 0x665d080, size 0x34, virtual false, abstract: false, final false
  inline void OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method OnEndContextRendering, addr 0x665cf8c, size 0xc0, virtual false, abstract: false, final false
  inline void OnEndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method OnSceneLoaded, addr 0x665ca8c, size 0x28, virtual false, abstract: false, final false
  inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method OnSetupAmbientProbe, addr 0x665b5a0, size 0x68, virtual false, abstract: false, final false
  static inline void OnSetupAmbientProbe();

  /// @brief Method PostCullBeginCameraRendering, addr 0x665b53c, size 0x64, virtual false, abstract: false, final false
  static inline void PostCullBeginCameraRendering(::UnityEngine::Rendering::RenderRequestBatcherContext context);

  /// @brief Method PostPostLateUpdate, addr 0x665cb10, size 0x394, virtual false, abstract: false, final false
  inline void PostPostLateUpdate();

  /// @brief Method PostPostLateUpdateStatic, addr 0x665cab4, size 0x5c, virtual false, abstract: false, final false
  static inline void PostPostLateUpdateStatic();

  /// @brief Method ProcessLODGroups, addr 0x665d56c, size 0x78, virtual false, abstract: false, final false
  inline void ProcessLODGroups(::Unity::Collections::NativeArray_1<int32_t> changedID, ::Unity::Collections::NativeArray_1<int32_t> destroyed,
                               ::Unity::Collections::NativeArray_1<int32_t> transformedID);

  /// @brief Method ProcessMaterials, addr 0x665d39c, size 0x74, virtual false, abstract: false, final false
  inline void ProcessMaterials(::Unity::Collections::NativeArray_1<int32_t> destroyedID, ::Unity::Collections::NativeArray_1<int32_t> unsupportedMaterials);

  /// @brief Method ProcessMeshes, addr 0x665d410, size 0x15c, virtual false, abstract: false, final false
  inline void ProcessMeshes(::Unity::Collections::NativeArray_1<int32_t> destroyedID);

  /// @brief Method ProcessRendererMaterialChanges, addr 0x665d820, size 0x3dc, virtual false, abstract: false, final false
  inline void ProcessRendererMaterialChanges(::Unity::Collections::NativeArray_1<int32_t> excludedRenderers, ::Unity::Collections::NativeArray_1<int32_t> changedMaterials,
                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> changedPackedMaterialDatas);

  /// @brief Method ProcessRenderers, addr 0x665d5e4, size 0x23c, virtual false, abstract: false, final false
  inline void ProcessRenderers(::UnityEngine::TypeDispatchData rendererChanges, ::Unity::Collections::NativeArray_1<int32_t> unsupportedRenderers);

  /// @brief Method Recreate, addr 0x665c020, size 0xc4, virtual false, abstract: false, final false
  static inline void Recreate(::UnityEngine::Rendering::GPUResidentDrawerSettings settings);

  /// @brief Method Reinitialize, addr 0x665bffc, size 0x24, virtual false, abstract: false, final false
  static inline void Reinitialize();

  /// @brief Method ReinitializeIfNeeded, addr 0x665b748, size 0x4, virtual false, abstract: false, final false
  static inline void ReinitializeIfNeeded();

  /// @brief Method RemoveFromPlayerLoop, addr 0x665bd10, size 0x2dc, virtual false, abstract: false, final false
  inline void RemoveFromPlayerLoop();

  /// @brief Method RenderDebugOccluderOverlay, addr 0x665b808, size 0xe4, virtual false, abstract: false, final false
  static inline void RenderDebugOccluderOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* debugSettings,
                                                ::UnityEngine::Vector2 screenPos, float_t maxHeight, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer);

  /// @brief Method RenderDebugOcclusionTestOverlay, addr 0x665b74c, size 0xbc, virtual false, abstract: false, final false
  static inline void RenderDebugOcclusionTestOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* debugSettings,
                                                     int32_t viewInstanceID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer);

  /// @brief Method ScheduleQueryMeshInstancesJob, addr 0x665dbfc, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryMeshInstancesJob(::Unity::Collections::NativeArray_1<int32_t> sortedMeshIDs,
                                                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x665dfa0, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x665e154, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method ScheduleQueryRendererGroupInstancesJob, addr 0x665e178, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleQueryRendererGroupInstancesJob(::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs, ::Unity::Collections::NativeArray_1<int32_t> instancesOffset,
                                                                         ::Unity::Collections::NativeArray_1<int32_t> instancesCount,
                                                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle> instances);

  /// @brief Method TransformInstances, addr 0x665e0ac, size 0x18, virtual false, abstract: false, final false
  inline void TransformInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices);

  /// @brief Method UpdateInstanceOccluders, addr 0x665b6a8, size 0xa0, virtual false, abstract: false, final false
  static inline void UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParameters,
                                             ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates);

  constexpr ::UnityEngine::Rendering::GPUResidentBatcher* const& __cordl_internal_get_m_Batcher() const;

  constexpr ::UnityEngine::Rendering::GPUResidentBatcher*& __cordl_internal_get_m_Batcher();

  constexpr ::UnityEngine::Rendering::RenderersBatchersContext* const& __cordl_internal_get_m_BatchersContext() const;

  constexpr ::UnityEngine::Rendering::RenderersBatchersContext*& __cordl_internal_get_m_BatchersContext();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_ContextIntPtr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_ContextIntPtr();

  constexpr ::UnityEngine::ObjectDispatcher* const& __cordl_internal_get_m_Dispatcher() const;

  constexpr ::UnityEngine::ObjectDispatcher*& __cordl_internal_get_m_Dispatcher();

  constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& __cordl_internal_get_m_GPUDrivenProcessor() const;

  constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& __cordl_internal_get_m_GPUDrivenProcessor();

  constexpr ::UnityEngine::Rendering::GPUResidentDrawerSettings const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::GPUResidentDrawerSettings& __cordl_internal_get_m_Settings();

  constexpr void __cordl_internal_set_m_Batcher(::UnityEngine::Rendering::GPUResidentBatcher* value);

  constexpr void __cordl_internal_set_m_BatchersContext(::UnityEngine::Rendering::RenderersBatchersContext* value);

  constexpr void __cordl_internal_set_m_ContextIntPtr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_Dispatcher(::UnityEngine::ObjectDispatcher* value);

  constexpr void __cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::GPUResidentDrawerSettings value);

  /// @brief Method .ctor, addr 0x665c3e0, size 0x5d8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::GPUResidentDrawerSettings settings, int32_t maxInstanceCount, int32_t maxTreeInstanceCount);

  static inline ::UnityEngine::Rendering::GPUResidentDrawer* getStaticF_s_Instance();

  /// @brief Method get_batcher, addr 0x665ca70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUResidentBatcher* get_batcher();

  /// @brief Method get_instance, addr 0x665b484, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUResidentDrawer* get_instance();

  /// @brief Method get_settings, addr 0x665ca78, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUResidentDrawerSettings get_settings();

  static inline void setStaticF_s_Instance(::UnityEngine::Rendering::GPUResidentDrawer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawer(GPUResidentDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawer(GPUResidentDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17589 };

  /// @brief Field m_ContextIntPtr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_ContextIntPtr;

  /// @brief Field m_Settings, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::Rendering::GPUResidentDrawerSettings ___m_Settings;

  /// @brief Field m_GPUDrivenProcessor, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenProcessor* ___m_GPUDrivenProcessor;

  /// @brief Field m_BatchersContext, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderersBatchersContext* ___m_BatchersContext;

  /// @brief Field m_Batcher, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUResidentBatcher* ___m_Batcher;

  /// @brief Field m_Dispatcher, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::ObjectDispatcher* ___m_Dispatcher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_ContextIntPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_Settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_GPUDrivenProcessor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_BatchersContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_Batcher) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawer, ___m_Dispatcher) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawer, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUResidentDrawer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawer*, "UnityEngine.Rendering", "GPUResidentDrawer");
NEED_NO_BOX(::UnityEngine::Rendering::GPUResidentDrawer_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawer_Strings*, "UnityEngine.Rendering", "GPUResidentDrawer/Strings");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawer_ClassifyMaterialsJob, "UnityEngine.Rendering", "GPUResidentDrawer/ClassifyMaterialsJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawer_FindRenderersFromMaterialJob, "UnityEngine.Rendering", "GPUResidentDrawer/FindRenderersFromMaterialJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawer_FindUnsupportedRenderersJob, "UnityEngine.Rendering", "GPUResidentDrawer/FindUnsupportedRenderersJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawer_GetMaterialsWithChangedPackedMaterialJob, "UnityEngine.Rendering", "GPUResidentDrawer/GetMaterialsWithChangedPackedMaterialJob");
