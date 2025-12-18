#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCuller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextStorage_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerSplitDebugArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionCullerShaderVariables_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTestComputeShader_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCuller)
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
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
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class ComputeGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
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
struct BinningConfig;
}
namespace UnityEngine::Rendering {
class CPUDrawInstanceData;
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
class ComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
namespace UnityEngine::Rendering {
struct FrustumPlaneCuller;
}
namespace UnityEngine::Rendering {
struct GPUInstanceDataBuffer_ReadOnly;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine::Rendering {
struct IndirectBufferContextHandles;
}
namespace UnityEngine::Rendering {
class InstanceCuller_InstanceOcclusionTestPassData;
}
namespace UnityEngine::Rendering {
struct InstanceCuller_SetupCullingJobInput;
}
namespace UnityEngine::Rendering {
class InstanceCuller_ShaderIDs;
}
namespace UnityEngine::Rendering {
class InstanceCuller___c;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionTestSubviewSettings;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData;
}
namespace UnityEngine::Rendering {
struct OccluderHandles;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingSettings;
}
namespace UnityEngine::Rendering {
struct ParallelBitArray;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ReceiverPlanes;
}
namespace UnityEngine::Rendering {
struct ReceiverSphereCuller;
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
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceCuller_InstanceOcclusionTestPassData;
}
namespace UnityEngine::Rendering {
class InstanceCuller_ShaderIDs;
}
namespace UnityEngine::Rendering {
class InstanceCuller___c;
}
namespace UnityEngine::Rendering {
struct InstanceCuller;
}
namespace UnityEngine::Rendering {
struct InstanceCuller_SetupCullingJobInput;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::InstanceCuller_ShaderIDs);
MARK_REF_PTR_T(::UnityEngine::Rendering::InstanceCuller___c);
MARK_VAL_T(::UnityEngine::Rendering::InstanceCuller);
MARK_VAL_T(::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCuller/ShaderIDs
class CORDL_TYPE InstanceCuller_ShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field InstanceOcclusionCullerShaderVariables, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_InstanceOcclusionCullerShaderVariables, put = setStaticF_InstanceOcclusionCullerShaderVariables)) int32_t InstanceOcclusionCullerShaderVariables;

  /// @brief Field _DrawArgs, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DrawArgs, put = setStaticF__DrawArgs)) int32_t _DrawArgs;

  /// @brief Field _DrawInfo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DrawInfo, put = setStaticF__DrawInfo)) int32_t _DrawInfo;

  /// @brief Field _InstanceDataBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InstanceDataBuffer, put = setStaticF__InstanceDataBuffer)) int32_t _InstanceDataBuffer;

  /// @brief Field _InstanceIndices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InstanceIndices, put = setStaticF__InstanceIndices)) int32_t _InstanceIndices;

  /// @brief Field _InstanceInfo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InstanceInfo, put = setStaticF__InstanceInfo)) int32_t _InstanceInfo;

  /// @brief Field _OccluderDepthPyramid, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OccluderDepthPyramid, put = setStaticF__OccluderDepthPyramid)) int32_t _OccluderDepthPyramid;

  /// @brief Field _OcclusionDebugCounters, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OcclusionDebugCounters, put = setStaticF__OcclusionDebugCounters)) int32_t _OcclusionDebugCounters;

  static inline int32_t getStaticF_InstanceOcclusionCullerShaderVariables();

  static inline int32_t getStaticF__DrawArgs();

  static inline int32_t getStaticF__DrawInfo();

  static inline int32_t getStaticF__InstanceDataBuffer();

  static inline int32_t getStaticF__InstanceIndices();

  static inline int32_t getStaticF__InstanceInfo();

  static inline int32_t getStaticF__OccluderDepthPyramid();

  static inline int32_t getStaticF__OcclusionDebugCounters();

  static inline void setStaticF_InstanceOcclusionCullerShaderVariables(int32_t value);

  static inline void setStaticF__DrawArgs(int32_t value);

  static inline void setStaticF__DrawInfo(int32_t value);

  static inline void setStaticF__InstanceDataBuffer(int32_t value);

  static inline void setStaticF__InstanceIndices(int32_t value);

  static inline void setStaticF__InstanceInfo(int32_t value);

  static inline void setStaticF__OccluderDepthPyramid(int32_t value);

  static inline void setStaticF__OcclusionDebugCounters(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller_ShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller_ShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCuller_ShaderIDs(InstanceCuller_ShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller_ShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCuller_ShaderIDs(InstanceCuller_ShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17626 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCuller_ShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCuller/SetupCullingJobInput
struct CORDL_TYPE InstanceCuller_SetupCullingJobInput {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x66648f4, size 0xfc, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller_SetupCullingJobInput();

  // Ctor Parameters [CppParam { name: "lodBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::UnityEngine::Rendering::BatchCullingContext*", modifiers: "",
  // def_value: None }, CppParam { name: "receiverPlanes", ty: "::UnityEngine::Rendering::ReceiverPlanes*", modifiers: "", def_value: None }, CppParam { name: "receiverSphereCuller", ty:
  // "::UnityEngine::Rendering::ReceiverSphereCuller*", modifiers: "", def_value: None }, CppParam { name: "frustumPlaneCuller", ty: "::UnityEngine::Rendering::FrustumPlaneCuller*", modifiers: "",
  // def_value: None }, CppParam { name: "screenRelativeMetric", ty: "float_t*", modifiers: "", def_value: None }]
  constexpr InstanceCuller_SetupCullingJobInput(float_t lodBias, ::UnityEngine::Rendering::BatchCullingContext* context, ::UnityEngine::Rendering::ReceiverPlanes* receiverPlanes,
                                                ::UnityEngine::Rendering::ReceiverSphereCuller* receiverSphereCuller, ::UnityEngine::Rendering::FrustumPlaneCuller* frustumPlaneCuller,
                                                float_t* screenRelativeMetric) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17627 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field lodBias, offset: 0x0, size: 0x4, def value: None
  float_t lodBias;

  /// @brief Field context, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::BatchCullingContext* context;

  /// @brief Field receiverPlanes, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ReceiverPlanes* receiverPlanes;

  /// @brief Field receiverSphereCuller, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ReceiverSphereCuller* receiverSphereCuller;

  /// @brief Field frustumPlaneCuller, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::FrustumPlaneCuller* frustumPlaneCuller;

  /// @brief Field screenRelativeMetric, offset: 0x28, size: 0x8, def value: None
  float_t* screenRelativeMetric;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput, lodBias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput, context) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput, receiverPlanes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput, receiverSphereCuller) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput, frustumPlaneCuller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput, screenRelativeMetric) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.IndirectBufferContextHandles, UnityEngine.Rendering.InstanceOcclusionTestSubviewSettings, UnityEngine.Rendering.OccluderHandles,
// UnityEngine.Rendering.OcclusionCullingSettings
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCuller/InstanceOcclusionTestPassData
class CORDL_TYPE InstanceCuller_InstanceOcclusionTestPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bufferHandles, offset 0x4c, size 0x30
  __declspec(property(get = __cordl_internal_get_bufferHandles, put = __cordl_internal_set_bufferHandles)) ::UnityEngine::Rendering::IndirectBufferContextHandles bufferHandles;

  /// @brief Field occluderHandles, offset 0x30, size 0x1c
  __declspec(property(get = __cordl_internal_get_occluderHandles, put = __cordl_internal_set_occluderHandles)) ::UnityEngine::Rendering::OccluderHandles occluderHandles;

  /// @brief Field settings, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::UnityEngine::Rendering::OcclusionCullingSettings settings;

  /// @brief Field subviewSettings, offset 0x1c, size 0x14
  __declspec(property(get = __cordl_internal_get_subviewSettings, put = __cordl_internal_set_subviewSettings)) ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings subviewSettings;

  static inline ::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::IndirectBufferContextHandles const& __cordl_internal_get_bufferHandles() const;

  constexpr ::UnityEngine::Rendering::IndirectBufferContextHandles& __cordl_internal_get_bufferHandles();

  constexpr ::UnityEngine::Rendering::OccluderHandles const& __cordl_internal_get_occluderHandles() const;

  constexpr ::UnityEngine::Rendering::OccluderHandles& __cordl_internal_get_occluderHandles();

  constexpr ::UnityEngine::Rendering::OcclusionCullingSettings const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Rendering::OcclusionCullingSettings& __cordl_internal_get_settings();

  constexpr ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings const& __cordl_internal_get_subviewSettings() const;

  constexpr ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings& __cordl_internal_get_subviewSettings();

  constexpr void __cordl_internal_set_bufferHandles(::UnityEngine::Rendering::IndirectBufferContextHandles value);

  constexpr void __cordl_internal_set_occluderHandles(::UnityEngine::Rendering::OccluderHandles value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Rendering::OcclusionCullingSettings value);

  constexpr void __cordl_internal_set_subviewSettings(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings value);

  /// @brief Method .ctor, addr 0x66649f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller_InstanceOcclusionTestPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller_InstanceOcclusionTestPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCuller_InstanceOcclusionTestPassData(InstanceCuller_InstanceOcclusionTestPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller_InstanceOcclusionTestPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCuller_InstanceOcclusionTestPassData(InstanceCuller_InstanceOcclusionTestPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17628 };

  /// @brief Field settings, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::OcclusionCullingSettings ___settings;

  /// @brief Field subviewSettings, offset: 0x1c, size: 0x14, def value: None
  ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings ___subviewSettings;

  /// @brief Field occluderHandles, offset: 0x30, size: 0x1c, def value: None
  ::UnityEngine::Rendering::OccluderHandles ___occluderHandles;

  /// @brief Field bufferHandles, offset: 0x4c, size: 0x30, def value: None
  ::UnityEngine::Rendering::IndirectBufferContextHandles ___bufferHandles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, ___settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, ___subviewSettings) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, ___occluderHandles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, ___bufferHandles) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCuller/<>c
class CORDL_TYPE InstanceCuller___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::InstanceCuller___c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0,
                      put = setStaticF___9__26_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__26_0;

  static inline ::UnityEngine::Rendering::InstanceCuller___c* New_ctor();

  /// @brief Method <InstanceOcclusionTest>b__26_0, addr 0x6664a4c, size 0x9c, virtual false, abstract: false, final false
  inline void _InstanceOcclusionTest_b__26_0(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* context);

  /// @brief Method .ctor, addr 0x6664a48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::InstanceCuller___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__26_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::InstanceCuller___c* value);

  static inline void setStaticF___9__26_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCuller___c(InstanceCuller___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCuller___c(InstanceCuller___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCuller___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.Rendering.IndirectBufferContextStorage, UnityEngine.Rendering.InstanceCullerSplitDebugArray,
// UnityEngine.Rendering.InstanceOcclusionCullerShaderVariables, UnityEngine.Rendering.InstanceOcclusionEventDebugArray, UnityEngine.Rendering.OcclusionTestComputeShader,
// UnityEngine.Rendering.ParallelBitArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCuller
struct CORDL_TYPE InstanceCuller {
public:
  // Declarations
  using InstanceOcclusionTestPassData = ::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData;

  using SetupCullingJobInput = ::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput;

  using ShaderIDs = ::UnityEngine::Rendering::InstanceCuller_ShaderIDs;

  using __c = ::UnityEngine::Rendering::InstanceCuller___c;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddOcclusionCullingDispatch, addr 0x6663af4, size 0xa2c, virtual false, abstract: false, final false
  inline void AddOcclusionCullingDispatch(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                          ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings> subviewSettings,
                                          ::ByRef<::UnityEngine::Rendering::IndirectBufferContextHandles> bufferHandles, ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles,
                                          ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext);

  /// @brief Method ComputeWorstCaseDrawCommandCount, addr 0x6662c78, size 0xfc, virtual false, abstract: false, final false
  inline int32_t ComputeWorstCaseDrawCommandCount(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::UnityEngine::Rendering::BinningConfig binningConfig,
                                                  ::UnityEngine::Rendering::CPUDrawInstanceData* drawInstanceData, int32_t crossFadedRendererCount);

  /// @brief Method CreateCompactedVisibilityMaskJob, addr 0x66635a0, size 0x154, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle CreateCompactedVisibilityMaskJob(::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly> instanceData,
                                                                   ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Jobs::JobHandle cullingJobHandle);

  /// @brief Method CreateCullJobTree, addr 0x6662d74, size 0x82c, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle CreateCullJobTree(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::UnityEngine::Rendering::BatchCullingOutput cullingOutput,
                                                    ::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly> instanceData,
                                                    ::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly> sharedInstanceData,
                                                    ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly> instanceDataBuffer,
                                                    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData,
                                                    ::UnityEngine::Rendering::CPUDrawInstanceData* drawInstanceData,
                                                    ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> batchIDs, int32_t crossFadedRendererCount,
                                                    float_t smallMeshScreenPercentage, ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon);

  /// @brief Method CreateFrustumCullingJob, addr 0x6662828, size 0x450, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle CreateFrustumCullingJob(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cc, ::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly> instanceData,
                                                          ::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly> sharedInstanceData,
                                                          ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData,
                                                          ::ByRef<::UnityEngine::Rendering::BinningConfig> binningConfig, float_t smallMeshScreenPercentage,
                                                          ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon,
                                                          ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t> rendererCrossFadeValues);

  /// @brief Method Dispose, addr 0x66645f0, size 0x128, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeCompactVisibilityMasks, addr 0x6663788, size 0x5c, virtual false, abstract: false, final false
  inline void DisposeCompactVisibilityMasks();

  /// @brief Method DisposeSceneViewHiddenBits, addr 0x66637e4, size 0x4, virtual false, abstract: false, final false
  inline void DisposeSceneViewHiddenBits();

  /// @brief Method EnsureValidOcclusionTestResults, addr 0x666384c, size 0x2a8, virtual false, abstract: false, final false
  inline void EnsureValidOcclusionTestResults(int32_t viewInstanceID);

  /// @brief Method FlushDebugCounters, addr 0x6664520, size 0x34, virtual false, abstract: false, final false
  inline void FlushDebugCounters();

  /// @brief Method GetCompactedVisibilityMasks, addr 0x66637e8, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ParallelBitArray GetCompactedVisibilityMasks(bool syncCullingJobs);

  /// @brief Method Init, addr 0x66625a4, size 0x284, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Rendering::GPUResidentDrawerResources* resources, ::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats);

  /// @brief Method InstanceOccludersUpdated, addr 0x66636f4, size 0x94, virtual false, abstract: false, final false
  inline void InstanceOccludersUpdated(int32_t viewInstanceID, int32_t subviewMask, ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext);

  /// @brief Method InstanceOcclusionTest, addr 0x665a3f8, size 0x4d4, virtual false, abstract: false, final false
  inline void InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings,
                                    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests,
                                    ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext);

  /// @brief Method OnBeginCameraRendering, addr 0x66645c0, size 0x18, virtual false, abstract: false, final false
  inline void OnBeginCameraRendering(::UnityEngine::Camera* camera);

  /// @brief Method OnBeginSceneViewCameraRendering, addr 0x6664554, size 0x4, virtual false, abstract: false, final false
  inline void OnBeginSceneViewCameraRendering();

  /// @brief Method OnEndCameraRendering, addr 0x66645d8, size 0x18, virtual false, abstract: false, final false
  inline void OnEndCameraRendering(::UnityEngine::Camera* camera);

  /// @brief Method OnEndSceneViewCameraRendering, addr 0x6664558, size 0x4, virtual false, abstract: false, final false
  inline void OnEndSceneViewCameraRendering();

  /// @brief Method UpdateFrame, addr 0x666455c, size 0x64, virtual false, abstract: false, final false
  inline void UpdateFrame();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller();

  // Ctor Parameters [CppParam { name: "m_CompactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None }, CppParam { name:
  // "m_CompactedVisibilityMasksJobsHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "m_IndirectStorage", ty:
  // "::UnityEngine::Rendering::IndirectBufferContextStorage", modifiers: "", def_value: None }, CppParam { name: "m_OcclusionTestShader", ty: "::UnityEngine::Rendering::OcclusionTestComputeShader",
  // modifiers: "", def_value: None }, CppParam { name: "m_ResetDrawArgsKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CopyInstancesKernel", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_CullInstancesKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DebugStats", ty:
  // "::UnityEngine::Rendering::DebugRendererBatcherStats*", modifiers: "", def_value: None }, CppParam { name: "m_SplitDebugArray", ty: "::UnityEngine::Rendering::InstanceCullerSplitDebugArray",
  // modifiers: "", def_value: None }, CppParam { name: "m_OcclusionEventDebugArray", ty: "::UnityEngine::Rendering::InstanceOcclusionEventDebugArray", modifiers: "", def_value: None }, CppParam {
  // name: "m_ProfilingSampleInstanceOcclusionTest", ty: "::UnityEngine::Rendering::ProfilingSampler*", modifiers: "", def_value: None }, CppParam { name: "m_ShaderVariables", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables>", modifiers: "", def_value: None }, CppParam { name: "m_ConstantBuffer", ty:
  // "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_CommandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }]
  constexpr InstanceCuller(::UnityEngine::Rendering::ParallelBitArray m_CompactedVisibilityMasks, ::Unity::Jobs::JobHandle m_CompactedVisibilityMasksJobsHandle,
                           ::UnityEngine::Rendering::IndirectBufferContextStorage m_IndirectStorage, ::UnityEngine::Rendering::OcclusionTestComputeShader m_OcclusionTestShader,
                           int32_t m_ResetDrawArgsKernel, int32_t m_CopyInstancesKernel, int32_t m_CullInstancesKernel, ::UnityEngine::Rendering::DebugRendererBatcherStats* m_DebugStats,
                           ::UnityEngine::Rendering::InstanceCullerSplitDebugArray m_SplitDebugArray, ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray m_OcclusionEventDebugArray,
                           ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampleInstanceOcclusionTest,
                           ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables> m_ShaderVariables, ::UnityEngine::ComputeBuffer* m_ConstantBuffer,
                           ::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17630 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x188 };

  /// @brief Field m_CompactedVisibilityMasks, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray m_CompactedVisibilityMasks;

  /// @brief Field m_CompactedVisibilityMasksJobsHandle, offset: 0x20, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle m_CompactedVisibilityMasksJobsHandle;

  /// @brief Field m_IndirectStorage, offset: 0x30, size: 0x80, def value: None
  ::UnityEngine::Rendering::IndirectBufferContextStorage m_IndirectStorage;

  /// @brief Field m_OcclusionTestShader, offset: 0xb0, size: 0x20, def value: None
  ::UnityEngine::Rendering::OcclusionTestComputeShader m_OcclusionTestShader;

  /// @brief Field m_ResetDrawArgsKernel, offset: 0xd0, size: 0x4, def value: None
  int32_t m_ResetDrawArgsKernel;

  /// @brief Field m_CopyInstancesKernel, offset: 0xd4, size: 0x4, def value: None
  int32_t m_CopyInstancesKernel;

  /// @brief Field m_CullInstancesKernel, offset: 0xd8, size: 0x4, def value: None
  int32_t m_CullInstancesKernel;

  /// @brief Field m_DebugStats, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugRendererBatcherStats* m_DebugStats;

  /// @brief Field m_SplitDebugArray, offset: 0xe8, size: 0x20, def value: None
  ::UnityEngine::Rendering::InstanceCullerSplitDebugArray m_SplitDebugArray;

  /// @brief Field m_OcclusionEventDebugArray, offset: 0x108, size: 0x58, def value: None
  ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray m_OcclusionEventDebugArray;

  /// @brief Field m_ProfilingSampleInstanceOcclusionTest, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampleInstanceOcclusionTest;

  /// @brief Field m_ShaderVariables, offset: 0x168, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables> m_ShaderVariables;

  /// @brief Field m_ConstantBuffer, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* m_ConstantBuffer;

  /// @brief Field m_CommandBuffer, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CompactedVisibilityMasks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CompactedVisibilityMasksJobsHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_IndirectStorage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_OcclusionTestShader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_ResetDrawArgsKernel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CopyInstancesKernel) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CullInstancesKernel) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_DebugStats) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_SplitDebugArray) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_OcclusionEventDebugArray) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_ProfilingSampleInstanceOcclusionTest) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_ShaderVariables) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_ConstantBuffer) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CommandBuffer) == 0x180, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCuller, 0x188>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*, "UnityEngine.Rendering", "InstanceCuller/InstanceOcclusionTestPassData");
NEED_NO_BOX(::UnityEngine::Rendering::InstanceCuller_ShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCuller_ShaderIDs*, "UnityEngine.Rendering", "InstanceCuller/ShaderIDs");
NEED_NO_BOX(::UnityEngine::Rendering::InstanceCuller___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCuller___c*, "UnityEngine.Rendering", "InstanceCuller/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCuller, "UnityEngine.Rendering", "InstanceCuller");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCuller_SetupCullingJobInput, "UnityEngine.Rendering", "InstanceCuller/SetupCullingJobInput");
