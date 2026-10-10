#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCuller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
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
struct CPUPerCameraInstanceData_PerCameraInstanceDataArrays;
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
class ComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
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
struct InstanceCuller_AnimatedFadeData;
}
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
struct InstanceCuller_AnimatedFadeData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCuller_ShaderIDs*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCuller___c*);
MARK_VAL_T(::UnityEngine::Rendering::InstanceCuller);
MARK_VAL_T(::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*, "UnityEngine.Rendering", "InstanceCuller/InstanceOcclusionTestPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCuller_ShaderIDs*, "UnityEngine.Rendering", "InstanceCuller/ShaderIDs");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCuller___c*, "UnityEngine.Rendering", "InstanceCuller/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCuller, "UnityEngine.Rendering", "InstanceCuller");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData, "UnityEngine.Rendering", "InstanceCuller/AnimatedFadeData");
// Dependencies Unity.Jobs.JobHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCuller/AnimatedFadeData
struct CORDL_TYPE InstanceCuller_AnimatedFadeData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller_AnimatedFadeData();

  // Ctor Parameters [CppParam { name: "cameraID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "jobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "",
  // def_value: None, comment: None }]
  constexpr InstanceCuller_AnimatedFadeData(int32_t cameraID, ::Unity::Jobs::JobHandle jobHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18174 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field cameraID, offset: 0x0, size: 0x4, def value: None
  int32_t cameraID;

  /// @brief Field jobHandle, offset: 0x8, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle jobHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData, cameraID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData, jobHandle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCuller/ShaderIDs
class CORDL_TYPE InstanceCuller_ShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field InstanceOcclusionCullerShaderVariables, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_InstanceOcclusionCullerShaderVariables, put = setStaticF_InstanceOcclusionCullerShaderVariables)) int32_t InstanceOcclusionCullerShaderVariables;

  /// @brief Field _DispatchArgs, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DispatchArgs, put = setStaticF__DispatchArgs)) int32_t _DispatchArgs;

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

  static inline int32_t getStaticF__DispatchArgs();

  static inline int32_t getStaticF__DrawArgs();

  static inline int32_t getStaticF__DrawInfo();

  static inline int32_t getStaticF__InstanceDataBuffer();

  static inline int32_t getStaticF__InstanceIndices();

  static inline int32_t getStaticF__InstanceInfo();

  static inline int32_t getStaticF__OccluderDepthPyramid();

  static inline int32_t getStaticF__OcclusionDebugCounters();

  static inline void setStaticF_InstanceOcclusionCullerShaderVariables(int32_t value);

  static inline void setStaticF__DispatchArgs(int32_t value);

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
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller_ShaderIDs", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCuller_ShaderIDs(InstanceCuller_ShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller_ShaderIDs", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCuller_ShaderIDs(InstanceCuller_ShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18175 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCuller_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.IndirectBufferContextHandles, UnityEngine.Rendering.InstanceOcclusionTestSubviewSettings, UnityEngine.Rendering.OccluderHandles,
// UnityEngine.Rendering.OcclusionCullingSettings
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCuller/InstanceOcclusionTestPassData
class CORDL_TYPE InstanceCuller_InstanceOcclusionTestPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bufferHandles, offset 0x4c, size 0x3c
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

  /// @brief Method .ctor, addr 0x6c4e5f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller_InstanceOcclusionTestPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller_InstanceOcclusionTestPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCuller_InstanceOcclusionTestPassData(InstanceCuller_InstanceOcclusionTestPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller_InstanceOcclusionTestPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCuller_InstanceOcclusionTestPassData(InstanceCuller_InstanceOcclusionTestPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18176 };

  /// @brief Field settings, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::OcclusionCullingSettings ___settings;

  /// @brief Field subviewSettings, offset: 0x1c, size: 0x14, def value: None
  ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings ___subviewSettings;

  /// @brief Field occluderHandles, offset: 0x30, size: 0x1c, def value: None
  ::UnityEngine::Rendering::OccluderHandles ___occluderHandles;

  /// @brief Field bufferHandles, offset: 0x4c, size: 0x3c, def value: None
  ::UnityEngine::Rendering::IndirectBufferContextHandles ___bufferHandles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, ___settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, ___subviewSettings) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, ___occluderHandles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData, ___bufferHandles) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData) == 0x88, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCuller/<>c
class CORDL_TYPE InstanceCuller___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::InstanceCuller___c* __9;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_0,
                      put = setStaticF___9__28_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__28_0;

  static inline ::UnityEngine::Rendering::InstanceCuller___c* New_ctor();

  /// @brief Method <InstanceOcclusionTest>b__28_0, addr 0x6c4e64c, size 0x9c, virtual false, abstract: false, final false
  inline void _InstanceOcclusionTest_b__28_0(::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* context);

  /// @brief Method .ctor, addr 0x6c4e648, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::InstanceCuller___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__28_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::InstanceCuller___c* value);

  static inline void setStaticF___9__28_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCuller___c(InstanceCuller___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCuller___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCuller___c(InstanceCuller___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCuller___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, Unity.Jobs.JobHandle, UnityEngine.Rendering.IndirectBufferContextStorage,
// UnityEngine.Rendering.InstanceCuller::AnimatedFadeData, UnityEngine.Rendering.InstanceCullerSplitDebugArray, UnityEngine.Rendering.InstanceOcclusionCullerShaderVariables,
// UnityEngine.Rendering.InstanceOcclusionEventDebugArray, UnityEngine.Rendering.OcclusionTestComputeShader, UnityEngine.Rendering.ParallelBitArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCuller
struct CORDL_TYPE InstanceCuller {
public:
  // Declarations
  using AnimatedFadeData = ::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData;

  using InstanceOcclusionTestPassData = ::UnityEngine::Rendering::InstanceCuller_InstanceOcclusionTestPassData;

  using ShaderIDs = ::UnityEngine::Rendering::InstanceCuller_ShaderIDs;

  using __c = ::UnityEngine::Rendering::InstanceCuller___c;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddOcclusionCullingDispatch, addr 0x6c4d018, size 0xaf8, virtual false, abstract: false, final false
  inline void AddOcclusionCullingDispatch(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings const> settings,
                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings const> subviewSettings,
                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::IndirectBufferContextHandles const> bufferHandles,
                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::OccluderHandles const> occluderHandles,
                                          ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext);

  /// @brief Method AnimateCrossFades, addr 0x6c4b978, size 0x278, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle AnimateCrossFades(::UnityEngine::Rendering::CPUPerCameraInstanceData perCameraInstanceData, ::UnityEngine::Rendering::BatchCullingContext cc,
                                                    ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays> cameraInstanceData, ::by_ref<bool> hasAnimatedCrossfade);

  /// @brief Method ComputeWorstCaseDrawCommandCount, addr 0x6c4c0ec, size 0xec, virtual false, abstract: false, final false
  inline int32_t ComputeWorstCaseDrawCommandCount(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingContext const> cc, ::UnityEngine::Rendering::BinningConfig binningConfig,
                                                  ::UnityEngine::Rendering::CPUDrawInstanceData* drawInstanceData);

  /// @brief Method CreateCompactedVisibilityMaskJob, addr 0x6c4cac4, size 0x154, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle CreateCompactedVisibilityMaskJob(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData_ReadOnly const> instanceData,
                                                                   ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Jobs::JobHandle cullingJobHandle);

  /// @brief Method CreateCullJobTree, addr 0x6c4c1d8, size 0x8ec, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle CreateCullJobTree(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingContext const> cc, ::UnityEngine::Rendering::BatchCullingOutput cullingOutput,
                                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData_ReadOnly const> instanceData,
                                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly const> sharedInstanceData,
                                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData const> perCameraInstanceData,
                                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly const> instanceDataBuffer,
                                                    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData,
                                                    ::UnityEngine::Rendering::CPUDrawInstanceData* drawInstanceData,
                                                    ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> batchIDs, float_t smallMeshScreenPercentage,
                                                    ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon);

  /// @brief Method CreateFrustumCullingJob, addr 0x6c4bbf0, size 0x4fc, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle CreateFrustumCullingJob(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingContext const> cc,
                                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData_ReadOnly const> instanceData,
                                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly const> sharedInstanceData,
                                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData const> perCameraInstanceData,
                                                          ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData,
                                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BinningConfig const> binningConfig, float_t smallMeshScreenPercentage,
                                                          ::UnityEngine::Rendering::OcclusionCullingCommon* occlusionCullingCommon,
                                                          ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t> rendererMeshLodSettings,
                                                          ::Unity::Collections::NativeArray_1<uint8_t> rendererCrossFadeValues);

  /// @brief Method Dispose, addr 0x6c4dca8, size 0x738, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeCompactVisibilityMasks, addr 0x6c4ccac, size 0x5c, virtual false, abstract: false, final false
  inline void DisposeCompactVisibilityMasks();

  /// @brief Method DisposeSceneViewHiddenBits, addr 0x6c4cd08, size 0x4, virtual false, abstract: false, final false
  inline void DisposeSceneViewHiddenBits();

  /// @brief Method EnsureValidOcclusionTestResults, addr 0x6c4cd70, size 0x2a8, virtual false, abstract: false, final false
  inline void EnsureValidOcclusionTestResults(int32_t viewInstanceID);

  /// @brief Method FlushDebugCounters, addr 0x6c4db10, size 0x48, virtual false, abstract: false, final false
  inline void FlushDebugCounters();

  /// @brief Method GetCompactedVisibilityMasks, addr 0x6c4cd0c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ParallelBitArray GetCompactedVisibilityMasks(bool syncCullingJobs);

  /// @brief Method Init, addr 0x6c4b6c0, size 0x2b8, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Rendering::GPUResidentDrawerResources* resources, ::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats);

  /// @brief Method InstanceOccludersUpdated, addr 0x6c4cc18, size 0x94, virtual false, abstract: false, final false
  inline void InstanceOccludersUpdated(int32_t viewInstanceID, int32_t subviewMask, ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext);

  /// @brief Method InstanceOcclusionTest, addr 0x6c41f88, size 0x4f4, virtual false, abstract: false, final false
  inline void InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings const> settings,
                                    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests,
                                    ::UnityEngine::Rendering::RenderersBatchersContext* batchersContext);

  /// @brief Method OnBeginCameraRendering, addr 0x6c4dc78, size 0x18, virtual false, abstract: false, final false
  inline void OnBeginCameraRendering(::UnityEngine::Camera* camera);

  /// @brief Method OnBeginSceneViewCameraRendering, addr 0x6c4db58, size 0x4, virtual false, abstract: false, final false
  inline void OnBeginSceneViewCameraRendering();

  /// @brief Method OnEndCameraRendering, addr 0x6c4dc90, size 0x18, virtual false, abstract: false, final false
  inline void OnEndCameraRendering(::UnityEngine::Camera* camera);

  /// @brief Method OnEndSceneViewCameraRendering, addr 0x6c4db5c, size 0x4, virtual false, abstract: false, final false
  inline void OnEndSceneViewCameraRendering();

  /// @brief Method UpdateFrame, addr 0x6c4db60, size 0x118, virtual false, abstract: false, final false
  inline void UpdateFrame(int32_t cameraCount);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCuller();

  // Ctor Parameters [CppParam { name: "m_LODParamsToCameraID", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_CompactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "m_CompactedVisibilityMasksJobsHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IndirectStorage", ty:
  // "::UnityEngine::Rendering::IndirectBufferContextStorage", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OcclusionTestShader", ty:
  // "::UnityEngine::Rendering::OcclusionTestComputeShader", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ResetDrawArgsKernel", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_CopyInstancesKernel", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CullInstancesKernel", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_DebugStats", ty: "::UnityEngine::Rendering::DebugRendererBatcherStats*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_SplitDebugArray", ty: "::UnityEngine::Rendering::InstanceCullerSplitDebugArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OcclusionEventDebugArray", ty:
  // "::UnityEngine::Rendering::InstanceOcclusionEventDebugArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ProfilingSampleInstanceOcclusionTest", ty:
  // "::UnityEngine::Rendering::ProfilingSampler*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ShaderVariables", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ConstantBuffer", ty:
  // "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CommandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value:
  // None, comment: None }]
  constexpr InstanceCuller(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData> m_LODParamsToCameraID,
                           ::UnityEngine::Rendering::ParallelBitArray m_CompactedVisibilityMasks, ::Unity::Jobs::JobHandle m_CompactedVisibilityMasksJobsHandle,
                           ::UnityEngine::Rendering::IndirectBufferContextStorage m_IndirectStorage, ::UnityEngine::Rendering::OcclusionTestComputeShader m_OcclusionTestShader,
                           int32_t m_ResetDrawArgsKernel, int32_t m_CopyInstancesKernel, int32_t m_CullInstancesKernel, ::UnityEngine::Rendering::DebugRendererBatcherStats* m_DebugStats,
                           ::UnityEngine::Rendering::InstanceCullerSplitDebugArray m_SplitDebugArray, ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray m_OcclusionEventDebugArray,
                           ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampleInstanceOcclusionTest,
                           ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables> m_ShaderVariables, ::UnityEngine::ComputeBuffer* m_ConstantBuffer,
                           ::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18178 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1a0 };

  /// @brief Field m_LODParamsToCameraID, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::InstanceCuller_AnimatedFadeData> m_LODParamsToCameraID;

  /// @brief Field m_CompactedVisibilityMasks, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray m_CompactedVisibilityMasks;

  /// @brief Field m_CompactedVisibilityMasksJobsHandle, offset: 0x30, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle m_CompactedVisibilityMasksJobsHandle;

  /// @brief Field m_IndirectStorage, offset: 0x40, size: 0x88, def value: None
  ::UnityEngine::Rendering::IndirectBufferContextStorage m_IndirectStorage;

  /// @brief Field m_OcclusionTestShader, offset: 0xc8, size: 0x20, def value: None
  ::UnityEngine::Rendering::OcclusionTestComputeShader m_OcclusionTestShader;

  /// @brief Field m_ResetDrawArgsKernel, offset: 0xe8, size: 0x4, def value: None
  int32_t m_ResetDrawArgsKernel;

  /// @brief Field m_CopyInstancesKernel, offset: 0xec, size: 0x4, def value: None
  int32_t m_CopyInstancesKernel;

  /// @brief Field m_CullInstancesKernel, offset: 0xf0, size: 0x4, def value: None
  int32_t m_CullInstancesKernel;

  /// @brief Field m_DebugStats, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugRendererBatcherStats* m_DebugStats;

  /// @brief Field m_SplitDebugArray, offset: 0x100, size: 0x20, def value: None
  ::UnityEngine::Rendering::InstanceCullerSplitDebugArray m_SplitDebugArray;

  /// @brief Field m_OcclusionEventDebugArray, offset: 0x120, size: 0x58, def value: None
  ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray m_OcclusionEventDebugArray;

  /// @brief Field m_ProfilingSampleInstanceOcclusionTest, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampleInstanceOcclusionTest;

  /// @brief Field m_ShaderVariables, offset: 0x180, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables> m_ShaderVariables;

  /// @brief Field m_ConstantBuffer, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* m_ConstantBuffer;

  /// @brief Field m_CommandBuffer, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_LODParamsToCameraID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CompactedVisibilityMasks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CompactedVisibilityMasksJobsHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_IndirectStorage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_OcclusionTestShader) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_ResetDrawArgsKernel) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CopyInstancesKernel) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CullInstancesKernel) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_DebugStats) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_SplitDebugArray) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_OcclusionEventDebugArray) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_ProfilingSampleInstanceOcclusionTest) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_ShaderVariables) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_ConstantBuffer) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCuller, m_CommandBuffer) == 0x198, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::InstanceCuller) == 0x1a0, "Size mismatch!");

} // namespace UnityEngine::Rendering
