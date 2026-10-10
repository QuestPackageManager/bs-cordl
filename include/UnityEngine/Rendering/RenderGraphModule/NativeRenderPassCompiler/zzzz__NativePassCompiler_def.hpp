#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTextureUVOriginStrategy_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativePassCompiler)
namespace GlobalNamespace {
class RenderGraphCompilationCache;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct Name;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassCompiler_NativeCompilerProfileId;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassCompiler_RenderGraphInputInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassData;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassBreakAudit;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct PassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTargetInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTextureUVOriginStrategy;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
struct SubPassDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassCompiler_NativeCompilerProfileId;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
class NativePassCompiler;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassCompiler_RenderGraphInputInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId,
                    "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "NativePassCompiler/NativeCompilerProfileId");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                    "NativePassCompiler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                    "NativePassCompiler/RenderGraphInputInfo");
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderTextureUVOriginStrategy
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler/RenderGraphInputInfo
struct CORDL_TYPE NativePassCompiler_RenderGraphInputInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePassCompiler_RenderGraphInputInfo();

  // Ctor Parameters [CppParam { name: "m_ResourcesForDebugOnly", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_RenderPasses", ty: "::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "debugName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "disablePassCulling", ty: "bool", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "disablePassMerging", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderTextureUVOriginStrategy", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy", modifiers: "", def_value: None, comment: None }]
  constexpr NativePassCompiler_RenderGraphInputInfo(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_ResourcesForDebugOnly,
                                                    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* m_RenderPasses, ::StringW debugName,
                                                    bool disablePassCulling, bool disablePassMerging,
                                                    ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy renderTextureUVOriginStrategy) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9400 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_ResourcesForDebugOnly, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_ResourcesForDebugOnly;

  /// @brief Field m_RenderPasses, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* m_RenderPasses;

  /// @brief Field debugName, offset: 0x10, size: 0x8, def value: None
  ::StringW debugName;

  /// @brief Field disablePassCulling, offset: 0x18, size: 0x1, def value: None
  bool disablePassCulling;

  /// @brief Field disablePassMerging, offset: 0x19, size: 0x1, def value: None
  bool disablePassMerging;

  /// @brief Field renderTextureUVOriginStrategy, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy renderTextureUVOriginStrategy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, m_ResourcesForDebugOnly) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, m_RenderPasses) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, debugName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, disablePassCulling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, disablePassMerging) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, renderTextureUVOriginStrategy) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler/NativeCompilerProfileId
struct CORDL_TYPE NativePassCompiler_NativeCompilerProfileId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NativePassCompiler_NativeCompilerProfileId_Unwrapped
  enum struct __NativePassCompiler_NativeCompilerProfileId_Unwrapped : int32_t {
    __E_NRPRGComp_PrepareNativePass = static_cast<int32_t>(0x0),
    __E_NRPRGComp_SetupContextData = static_cast<int32_t>(0x1),
    __E_NRPRGComp_BuildGraph = static_cast<int32_t>(0x2),
    __E_NRPRGComp_CullNodes = static_cast<int32_t>(0x3),
    __E_NRPRGComp_TryMergeNativePasses = static_cast<int32_t>(0x4),
    __E_NRPRGComp_FindResourceUsageRanges = static_cast<int32_t>(0x5),
    __E_NRPRGComp_DetectMemorylessResources = static_cast<int32_t>(0x6),
    __E_NRPRGComp_PropagateTextureUVOrigin = static_cast<int32_t>(0x7),
    __E_NRPRGComp_ExecuteInitializeResources = static_cast<int32_t>(0x8),
    __E_NRPRGComp_ExecuteBeginRenderpassCommand = static_cast<int32_t>(0x9),
    __E_NRPRGComp_ExecuteDestroyResources = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NativePassCompiler_NativeCompilerProfileId_Unwrapped() const noexcept {
    return static_cast<__NativePassCompiler_NativeCompilerProfileId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePassCompiler_NativeCompilerProfileId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr NativePassCompiler_NativeCompilerProfileId(int32_t value__) noexcept;

  /// @brief Field NRPRGComp_BuildGraph value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_BuildGraph;

  /// @brief Field NRPRGComp_CullNodes value: I32(3)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_CullNodes;

  /// @brief Field NRPRGComp_DetectMemorylessResources value: I32(6)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_DetectMemorylessResources;

  /// @brief Field NRPRGComp_ExecuteBeginRenderpassCommand value: I32(9)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_ExecuteBeginRenderpassCommand;

  /// @brief Field NRPRGComp_ExecuteDestroyResources value: I32(10)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_ExecuteDestroyResources;

  /// @brief Field NRPRGComp_ExecuteInitializeResources value: I32(8)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_ExecuteInitializeResources;

  /// @brief Field NRPRGComp_FindResourceUsageRanges value: I32(5)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_FindResourceUsageRanges;

  /// @brief Field NRPRGComp_PrepareNativePass value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_PrepareNativePass;

  /// @brief Field NRPRGComp_PropagateTextureUVOrigin value: I32(7)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_PropagateTextureUVOrigin;

  /// @brief Field NRPRGComp_SetupContextData value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_SetupContextData;

  /// @brief Field NRPRGComp_TryMergeNativePasses value: I32(4)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_TryMergeNativePasses;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9401 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
// Dependencies System.Object, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.AttachmentDescriptor,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler::RenderGraphInputInfo, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler
class CORDL_TYPE NativePassCompiler : public ::System::Object {
public:
  // Declarations
  using NativeCompilerProfileId = ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId;

  using RenderGraphInputInfo = ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo;

  /// @brief Field contextData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_contextData, put = __cordl_internal_set_contextData)) Il2CppObject* contextData;

  /// @brief Field defaultContextData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultContextData, put = __cordl_internal_set_defaultContextData)) Il2CppObject* defaultContextData;

  /// @brief Field graph, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_graph,
                      put = __cordl_internal_set_graph)) ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo graph;

  /// @brief Field graphPassNamesForDebug, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get_graphPassNamesForDebug,
      put = __cordl_internal_set_graphPassNamesForDebug)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* graphPassNamesForDebug;

  /// @brief Field m_BeginRenderPassAttachments, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BeginRenderPassAttachments,
                      put = __cordl_internal_set_m_BeginRenderPassAttachments)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>
      m_BeginRenderPassAttachments;

  /// @brief Field m_CompilationCache, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CompilationCache, put = __cordl_internal_set_m_CompilationCache)) ::GlobalNamespace::RenderGraphCompilationCache* m_CompilationCache;

  /// @brief Field m_DelayedLastUseListPerPassMap, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DelayedLastUseListPerPassMap, put = __cordl_internal_set_m_DelayedLastUseListPerPassMap)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>* m_DelayedLastUseListPerPassMap;

  /// @brief Field m_HasSideEffectPassIdCullingStack, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HasSideEffectPassIdCullingStack,
                      put = __cordl_internal_set_m_HasSideEffectPassIdCullingStack)) ::System::Collections::Generic::Stack_1<int32_t>* m_HasSideEffectPassIdCullingStack;

  /// @brief Field m_TempMRTArrays, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempMRTArrays, put = __cordl_internal_set_m_TempMRTArrays)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> m_TempMRTArrays;

  /// @brief Field m_UnusedVersionedResourceIdCullingStacks, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnusedVersionedResourceIdCullingStacks, put = __cordl_internal_set_m_UnusedVersionedResourceIdCullingStacks)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>* m_UnusedVersionedResourceIdCullingStacks;

  /// @brief Field previousCommandBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_previousCommandBuffer, put = __cordl_internal_set_previousCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* previousCommandBuffer;

  /// @brief Field s_ForceGenerateAuditsForTests, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_ForceGenerateAuditsForTests, put = setStaticF_s_ForceGenerateAuditsForTests)) bool s_ForceGenerateAuditsForTests;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddDelayedLastUseToPass, addr 0x6c2248c, size 0x198, virtual false, abstract: false, final false
  inline void AddDelayedLastUseToPass(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> releaseResource, int32_t passId);

  /// @brief Method AddLastUseFromDelayedList, addr 0x6c22624, size 0x18c, virtual false, abstract: false, final false
  inline void AddLastUseFromDelayedList(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> passData);

  /// @brief Method BuildGraph, addr 0x6c1e9e0, size 0x908, virtual false, abstract: false, final false
  inline void BuildGraph();

  /// @brief Method Cleanup, addr 0x6c1e228, size 0x8c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x6c1e3bc, size 0x208, virtual false, abstract: false, final false
  inline void Clear(bool clearContextData);

  /// @brief Method ClearDelayedLastUseListAtPass, addr 0x6c223f0, size 0x9c, virtual false, abstract: false, final false
  inline void ClearDelayedLastUseListAtPass(int32_t passId);

  /// @brief Method Compile, addr 0x6c1e8e4, size 0x64, virtual false, abstract: false, final false
  inline void Compile(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  /// @brief Method CullRenderGraphPassesWritingOnlyUnusedResources, addr 0x6c21c1c, size 0x55c, virtual false, abstract: false, final false
  inline void CullRenderGraphPassesWritingOnlyUnusedResources();

  /// @brief Method CullUnusedRenderGraphPasses, addr 0x6c1f2e8, size 0x33c, virtual false, abstract: false, final false
  inline void CullUnusedRenderGraphPasses();

  /// @brief Method DetectMemoryLessResources, addr 0x6c2030c, size 0x4b0, virtual false, abstract: false, final false
  inline void DetectMemoryLessResources();

  /// @brief Method DetermineLoadStoreActions, addr 0x6c227b0, size 0x590, virtual false, abstract: false, final false
  inline void DetermineLoadStoreActions(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass);

  /// @brief Method Dispose, addr 0x6c1e2b4, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EndRenderGraphPass, addr 0x6c25520, size 0x19e4, virtual false, abstract: false, final false
  inline void EndRenderGraphPass(::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*> rgContext,
                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> passData, ::by_ref<bool> inRenderPass,
                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, bool nrpBegan);

  /// @brief Method ExecuteBeginRenderPass, addr 0x6c23900, size 0x838, virtual false, abstract: false, final false
  inline void ExecuteBeginRenderPass(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass);

  /// @brief Method ExecuteDestroyResource, addr 0x6c24138, size 0x474, virtual false, abstract: false, final false
  inline void ExecuteDestroyResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass);

  /// @brief Method ExecuteGraph, addr 0x6c25000, size 0x520, virtual false, abstract: false, final false
  inline void ExecuteGraph(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                           /* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* const> passes);

  /// @brief Method ExecuteInitializeResource, addr 0x6c23010, size 0x5cc, virtual false, abstract: false, final false
  inline bool ExecuteInitializeResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData const> pass);

  /// @brief Method ExecuteRenderGraphPass, addr 0x6c24d6c, size 0x294, virtual false, abstract: false, final false
  inline void ExecuteRenderGraphPass(::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*> rgContext,
                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method ExecuteSetRandomWriteTarget, addr 0x6c24b14, size 0x258, virtual false, abstract: false, final false
  inline void ExecuteSetRandomWriteTarget(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CommandBuffer* const> cmd,
                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, int32_t index,
                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> resource, bool preserveCounterValue);

  /// @brief Method ExecuteSetRenderTargets, addr 0x6c245ac, size 0x568, virtual false, abstract: false, final false
  inline void ExecuteSetRenderTargets(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass, ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext);

  /// @brief Method Finalize, addr 0x6c1e1e4, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FindFirstNonCulledPassIdGoingBackward, addr 0x6c222d0, size 0x120, virtual false, abstract: false, final false
  inline int32_t FindFirstNonCulledPassIdGoingBackward(int32_t startPassId, bool startPassIsIncluded);

  /// @brief Method FindFirstPassIdOnGraphicsQueueAwaitingFenceGoingForward, addr 0x6c22178, size 0x158, virtual false, abstract: false, final false
  inline bool FindFirstPassIdOnGraphicsQueueAwaitingFenceGoingForward(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> startAsyncPass,
                                                                      ::by_ref<int32_t> firstPassIdAwaiting);

  /// @brief Method FindResourceUsageRangeAndSynchronization, addr 0x6c1f958, size 0x9b4, virtual false, abstract: false, final false
  inline void FindResourceUsageRangeAndSynchronization();

  /// @brief Method GenerateNativeCompilerDebugData, addr 0x6c1bc34, size 0x219c, virtual false, abstract: false, final false
  inline void GenerateNativeCompilerDebugData(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*> debugData);

  /// @brief Method HandleExtendedFeatureFlags, addr 0x6c1e5c4, size 0x320, virtual false, abstract: false, final false
  inline void HandleExtendedFeatureFlags();

  /// @brief Method Initialize, addr 0x6c1e318, size 0xa4, virtual false, abstract: false, final false
  inline bool Initialize(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                         ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* renderPasses,
                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* debugParams, ::StringW debugName, bool useCompilationCaching, int32_t graphHash, int32_t frameIndex,
                         ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy renderTextureUVOriginStrategy);

  /// @brief Method InjectSpaces, addr 0x6c1bac0, size 0x174, virtual false, abstract: false, final false
  static inline ::StringW InjectSpaces(::StringW camelCaseString);

  /// @brief Method IsGlobalTextureInPass, addr 0x6c22d40, size 0x154, virtual false, abstract: false, final false
  static inline bool IsGlobalTextureInPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method IsSameNativeSubPass, addr 0x6c22e94, size 0x17c, virtual false, abstract: false, final false
  static inline bool IsSameNativeSubPass(::by_ref<::UnityEngine::Rendering::SubPassDescriptor> a, ::by_ref<::UnityEngine::Rendering::SubPassDescriptor> b);

  /// @brief Method MakeAttachmentInfo, addr 0x6c1abec, size 0x498, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*
  MakeAttachmentInfo(Il2CppObject* ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData const> nativePass, int32_t attachmentIndex);

  /// @brief Method MakePassBreakInfoMessage, addr 0x6c1b084, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW MakePassBreakInfoMessage(Il2CppObject* ctx,
                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData const> nativePass);

  /// @brief Method MakePassMergeMessage, addr 0x6c1b1c4, size 0x8fc, virtual false, abstract: false, final false
  static inline ::StringW MakePassMergeMessage(Il2CppObject* ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData const> pass,
                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData const> prevPass,
                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit const> mergeResult);

  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* New_ctor(::GlobalNamespace::RenderGraphCompilationCache* cache);

  /// @brief Method PrepareNativeRenderPasses, addr 0x6c207bc, size 0xf0, virtual false, abstract: false, final false
  inline void PrepareNativeRenderPasses();

  /// @brief Method PropagateTextureUVOrigin, addr 0x6c208ac, size 0x624, virtual false, abstract: false, final false
  inline void PropagateTextureUVOrigin();

  /// @brief Method SetPassStatesForNativePass, addr 0x6c20ed0, size 0xc, virtual false, abstract: false, final false
  inline void SetPassStatesForNativePass(int32_t nativePassId);

  /// @brief Method SetupContextData, addr 0x6c1e948, size 0x98, virtual false, abstract: false, final false
  inline void SetupContextData(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  /// @brief Method TryMergeNativePasses, addr 0x6c1f624, size 0x334, virtual false, abstract: false, final false
  inline void TryMergeNativePasses();

  /// @brief Method TrySetupRasterFragmentList, addr 0x6c21174, size 0xaa8, virtual false, abstract: false, final false
  inline bool TrySetupRasterFragmentList(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> ctxPass,
                                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*> inputPass, ::by_ref<::StringW> errorMessage);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method ValidateAttachment, addr 0x6c2376c, size 0x194, virtual false, abstract: false, final false
  inline void ValidateAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo const> attRenderTargetInfo,
                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, int32_t nativePassWidth, int32_t nativePassHeight, int32_t nativePassMSAASamples,
                                 bool isVrs, bool isShaderResolve);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method ValidateNativePass, addr 0x6c235dc, size 0x190, virtual false, abstract: false, final false
  inline void ValidateNativePass(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData const> nativePass, int32_t width, int32_t height,
                                 int32_t depth, int32_t samples, int32_t attachmentCount);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method ValidatePasses, addr 0x6c20edc, size 0x298, virtual false, abstract: false, final false
  inline void ValidatePasses();

  constexpr Il2CppObject* const& __cordl_internal_get_contextData() const;

  constexpr Il2CppObject*& __cordl_internal_get_contextData();

  constexpr Il2CppObject* const& __cordl_internal_get_defaultContextData() const;

  constexpr Il2CppObject*& __cordl_internal_get_defaultContextData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo const& __cordl_internal_get_graph() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo& __cordl_internal_get_graph();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* const& __cordl_internal_get_graphPassNamesForDebug() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*& __cordl_internal_get_graphPassNamesForDebug();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> const& __cordl_internal_get_m_BeginRenderPassAttachments() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>& __cordl_internal_get_m_BeginRenderPassAttachments();

  constexpr ::GlobalNamespace::RenderGraphCompilationCache* const& __cordl_internal_get_m_CompilationCache() const;

  constexpr ::GlobalNamespace::RenderGraphCompilationCache*& __cordl_internal_get_m_CompilationCache();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>* const&
  __cordl_internal_get_m_DelayedLastUseListPerPassMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*&
  __cordl_internal_get_m_DelayedLastUseListPerPassMap();

  constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_m_HasSideEffectPassIdCullingStack() const;

  constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_m_HasSideEffectPassIdCullingStack();

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> const& __cordl_internal_get_m_TempMRTArrays() const;

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>& __cordl_internal_get_m_TempMRTArrays();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>* const&
  __cordl_internal_get_m_UnusedVersionedResourceIdCullingStacks() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*&
  __cordl_internal_get_m_UnusedVersionedResourceIdCullingStacks();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_previousCommandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_previousCommandBuffer();

  constexpr void __cordl_internal_set_contextData(Il2CppObject* value);

  constexpr void __cordl_internal_set_defaultContextData(Il2CppObject* value);

  constexpr void __cordl_internal_set_graph(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo value);

  constexpr void __cordl_internal_set_graphPassNamesForDebug(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* value);

  constexpr void __cordl_internal_set_m_BeginRenderPassAttachments(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> value);

  constexpr void __cordl_internal_set_m_CompilationCache(::GlobalNamespace::RenderGraphCompilationCache* value);

  constexpr void __cordl_internal_set_m_DelayedLastUseListPerPassMap(
      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>* value);

  constexpr void __cordl_internal_set_m_HasSideEffectPassIdCullingStack(::System::Collections::Generic::Stack_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_TempMRTArrays(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> value);

  constexpr void __cordl_internal_set_m_UnusedVersionedResourceIdCullingStacks(
      ::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>* value);

  constexpr void __cordl_internal_set_previousCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  /// @brief Method .ctor, addr 0x6c1ddd0, size 0x414, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::RenderGraphCompilationCache* cache);

  static inline bool getStaticF_s_ForceGenerateAuditsForTests();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_ForceGenerateAuditsForTests(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePassCompiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativePassCompiler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativePassCompiler(NativePassCompiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativePassCompiler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativePassCompiler(NativePassCompiler const&) = delete;

  /// @brief Field ArbitraryMaxNbMergedPasses offset 0xffffffff size 0x4
  static constexpr int32_t ArbitraryMaxNbMergedPasses{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9402 };

  /// @brief Field k_EstimatedPassCount offset 0xffffffff size 0x4
  static constexpr int32_t k_EstimatedPassCount{ static_cast<int32_t>(0x64) };

  /// @brief Field k_MaxSubpass offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxSubpass{ static_cast<int32_t>(0x8) };

  /// @brief Field graph, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo ___graph;

  /// @brief Field contextData, offset: 0x30, size: 0x8, def value: None
  Il2CppObject* ___contextData;

  /// @brief Field defaultContextData, offset: 0x38, size: 0x8, def value: None
  Il2CppObject* ___defaultContextData;

  /// @brief Field previousCommandBuffer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___previousCommandBuffer;

  /// @brief Field m_HasSideEffectPassIdCullingStack, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<int32_t>* ___m_HasSideEffectPassIdCullingStack;

  /// @brief Field m_UnusedVersionedResourceIdCullingStacks, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>* ___m_UnusedVersionedResourceIdCullingStacks;

  /// @brief Field m_DelayedLastUseListPerPassMap, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>* ___m_DelayedLastUseListPerPassMap;

  /// @brief Field m_CompilationCache, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::RenderGraphCompilationCache* ___m_CompilationCache;

  /// @brief Field m_TempMRTArrays, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> ___m_TempMRTArrays;

  /// @brief Field m_BeginRenderPassAttachments, offset: 0x70, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> ___m_BeginRenderPassAttachments;

  /// @brief Field graphPassNamesForDebug, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* ___graphPassNamesForDebug;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___graph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___contextData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___defaultContextData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___previousCommandBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_HasSideEffectPassIdCullingStack) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_UnusedVersionedResourceIdCullingStacks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_DelayedLastUseListPerPassMap) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_CompilationCache) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_TempMRTArrays) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_BeginRenderPassAttachments) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___graphPassNamesForDebug) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
