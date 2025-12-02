#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativePassCompiler)
namespace GlobalNamespace {
class RenderGraphCompilationCache;
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
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler/RenderGraphInputInfo
struct CORDL_TYPE NativePassCompiler_RenderGraphInputInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePassCompiler_RenderGraphInputInfo();

  // Ctor Parameters [CppParam { name: "m_ResourcesForDebugOnly", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*", modifiers: "", def_value: None }, CppParam { name:
  // "m_RenderPasses", ty: "::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*", modifiers: "", def_value: None }, CppParam { name: "debugName", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "disableCulling", ty: "bool", modifiers: "", def_value: None }]
  constexpr NativePassCompiler_RenderGraphInputInfo(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_ResourcesForDebugOnly,
                                                    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* m_RenderPasses, ::StringW debugName,
                                                    bool disableCulling) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12454 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_ResourcesForDebugOnly, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_ResourcesForDebugOnly;

  /// @brief Field m_RenderPasses, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* m_RenderPasses;

  /// @brief Field debugName, offset: 0x10, size: 0x8, def value: None
  ::StringW debugName;

  /// @brief Field disableCulling, offset: 0x18, size: 0x1, def value: None
  bool disableCulling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, m_ResourcesForDebugOnly) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, m_RenderPasses) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, debugName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, disableCulling) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo, 0x20>, "Size mismatch!");

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
    __E_NRPRGComp_ExecuteCreateResources = static_cast<int32_t>(0x7),
    __E_NRPRGComp_ExecuteBeginRenderpassCommand = static_cast<int32_t>(0x8),
    __E_NRPRGComp_ExecuteDestroyResources = static_cast<int32_t>(0x9),
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativePassCompiler_NativeCompilerProfileId(int32_t value__) noexcept;

  /// @brief Field NRPRGComp_BuildGraph value: I32(2)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_BuildGraph;

  /// @brief Field NRPRGComp_CullNodes value: I32(3)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_CullNodes;

  /// @brief Field NRPRGComp_DetectMemorylessResources value: I32(6)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_DetectMemorylessResources;

  /// @brief Field NRPRGComp_ExecuteBeginRenderpassCommand value: I32(8)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_ExecuteBeginRenderpassCommand;

  /// @brief Field NRPRGComp_ExecuteCreateResources value: I32(7)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_ExecuteCreateResources;

  /// @brief Field NRPRGComp_ExecuteDestroyResources value: I32(9)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_ExecuteDestroyResources;

  /// @brief Field NRPRGComp_FindResourceUsageRanges value: I32(5)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_FindResourceUsageRanges;

  /// @brief Field NRPRGComp_PrepareNativePass value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_PrepareNativePass;

  /// @brief Field NRPRGComp_SetupContextData value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_SetupContextData;

  /// @brief Field NRPRGComp_TryMergeNativePasses value: I32(4)
  static ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId const NRPRGComp_TryMergeNativePasses;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12455 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
// Dependencies System.Object, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.AttachmentDescriptor,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler::RenderGraphInputInfo
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

  /// @brief Field graphPassNamesForDebug, offset 0x68, size 0x8
  __declspec(property(
      get = __cordl_internal_get_graphPassNamesForDebug,
      put = __cordl_internal_set_graphPassNamesForDebug)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* graphPassNamesForDebug;

  /// @brief Field m_BeginRenderPassAttachments, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BeginRenderPassAttachments,
                      put = __cordl_internal_set_m_BeginRenderPassAttachments)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>
      m_BeginRenderPassAttachments;

  /// @brief Field m_CompilationCache, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CompilationCache, put = __cordl_internal_set_m_CompilationCache)) ::GlobalNamespace::RenderGraphCompilationCache* m_CompilationCache;

  /// @brief Field m_Disposed, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Disposed, put = __cordl_internal_set_m_Disposed)) bool m_Disposed;

  /// @brief Field previousCommandBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_previousCommandBuffer, put = __cordl_internal_set_previousCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* previousCommandBuffer;

  /// @brief Field toVisitPassIds, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_toVisitPassIds, put = __cordl_internal_set_toVisitPassIds)) ::System::Collections::Generic::Stack_1<int32_t>* toVisitPassIds;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BuildGraph, addr 0x65d0c1c, size 0xe34, virtual false, abstract: false, final false
  inline void BuildGraph();

  /// @brief Method Cleanup, addr 0x65d096c, size 0x60, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x65d0ac8, size 0x74, virtual false, abstract: false, final false
  inline void Clear(bool clearContextData);

  /// @brief Method Compile, addr 0x65d0b3c, size 0x40, virtual false, abstract: false, final false
  inline void Compile(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  /// @brief Method CullUnusedRenderPasses, addr 0x65d1a50, size 0x3d8, virtual false, abstract: false, final false
  inline void CullUnusedRenderPasses();

  /// @brief Method DetectMemoryLessResources, addr 0x65d2a84, size 0x494, virtual false, abstract: false, final false
  inline void DetectMemoryLessResources();

  /// @brief Method DetermineLoadStoreActions, addr 0x65d3014, size 0x5cc, virtual false, abstract: false, final false
  inline void DetermineLoadStoreActions(::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass);

  /// @brief Method Dispose, addr 0x65d09cc, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ExecuteBeginRenderPass, addr 0x65d3fdc, size 0x5b8, virtual false, abstract: false, final false
  inline void ExecuteBeginRenderPass(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass);

  /// @brief Method ExecuteCreateRessource, addr 0x65d38a8, size 0x480, virtual false, abstract: false, final false
  inline void ExecuteCreateRessource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass);

  /// @brief Method ExecuteDestroyResource, addr 0x65d4594, size 0x434, virtual false, abstract: false, final false
  inline void ExecuteDestroyResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass);

  /// @brief Method ExecuteGraph, addr 0x65d4e60, size 0x6b4, virtual false, abstract: false, final false
  inline void ExecuteGraph(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                           ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*> passes);

  /// @brief Method ExecuteGraphNode, addr 0x65d4be4, size 0x27c, virtual false, abstract: false, final false
  inline void ExecuteGraphNode(::ByRef<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*> rgContext,
                               ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method Finalize, addr 0x65d0928, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FindResourceUsageRanges, addr 0x65d213c, size 0x948, virtual false, abstract: false, final false
  inline void FindResourceUsageRanges();

  /// @brief Method GenerateNativeCompilerDebugData, addr 0x65d6380, size 0x4334, virtual false, abstract: false, final false
  inline void GenerateNativeCompilerDebugData(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*> debugData);

  /// @brief Method Initialize, addr 0x65d0a30, size 0x98, virtual false, abstract: false, final false
  inline bool Initialize(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                         ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* renderPasses, bool disableCulling, ::StringW debugName,
                         bool useCompilationCaching, int32_t graphHash, int32_t frameIndex);

  /// @brief Method InjectSpaces, addr 0x65d620c, size 0x174, virtual false, abstract: false, final false
  static inline ::StringW InjectSpaces(::StringW camelCaseString);

  /// @brief Method IsGlobalTextureInPass, addr 0x65d35e0, size 0x150, virtual false, abstract: false, final false
  static inline bool IsGlobalTextureInPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle);

  /// @brief Method IsSameNativeSubPass, addr 0x65d3730, size 0x178, virtual false, abstract: false, final false
  static inline bool IsSameNativeSubPass(::ByRef<::UnityEngine::Rendering::SubPassDescriptor> a, ::ByRef<::UnityEngine::Rendering::SubPassDescriptor> b);

  /// @brief Method MakeAttachmentInfo, addr 0x65d5514, size 0x48c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*
  MakeAttachmentInfo(Il2CppObject* ctx, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass, int32_t attachmentIndex);

  /// @brief Method MakePassBreakInfoMessage, addr 0x65d59a0, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW MakePassBreakInfoMessage(Il2CppObject* ctx, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass);

  /// @brief Method MakePassMergeMessage, addr 0x65d5ae0, size 0x72c, virtual false, abstract: false, final false
  static inline ::StringW MakePassMergeMessage(Il2CppObject* ctx, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> pass,
                                               ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData> prevPass,
                                               ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit mergeResult);

  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* New_ctor(::GlobalNamespace::RenderGraphCompilationCache* cache);

  /// @brief Method PrepareNativeRenderPasses, addr 0x65d2f18, size 0xf0, virtual false, abstract: false, final false
  inline void PrepareNativeRenderPasses();

  /// @brief Method SetPassStatesForNativePass, addr 0x65d3008, size 0xc, virtual false, abstract: false, final false
  inline void SetPassStatesForNativePass(int32_t nativePassId);

  /// @brief Method SetRandomWriteTarget, addr 0x65d49c8, size 0x21c, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(::ByRef<::UnityEngine::Rendering::CommandBuffer*> cmd, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, int32_t index,
                                   ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource, bool preserveCounterValue);

  /// @brief Method SetupContextData, addr 0x65d0b7c, size 0xa0, virtual false, abstract: false, final false
  inline void SetupContextData(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  /// @brief Method TryMergeNativePasses, addr 0x65d1e28, size 0x314, virtual false, abstract: false, final false
  inline void TryMergeNativePasses();

  /// @brief Method ValidateAttachmentRenderTarget, addr 0x65d3eb8, size 0x124, virtual false, abstract: false, final false
  inline void ValidateAttachmentRenderTarget(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> attRenderTargetInfo,
                                             ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources, int32_t nativePassWidth, int32_t nativePassHeight,
                                             int32_t nativePassMSAASamples);

  /// @brief Method ValidateNativePass, addr 0x65d3d28, size 0x190, virtual false, abstract: false, final false
  inline void ValidateNativePass(::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> nativePass, int32_t width, int32_t height, int32_t depth,
                                 int32_t samples, int32_t attachmentCount);

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

  constexpr bool const& __cordl_internal_get_m_Disposed() const;

  constexpr bool& __cordl_internal_get_m_Disposed();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_previousCommandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_previousCommandBuffer();

  constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_toVisitPassIds() const;

  constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_toVisitPassIds();

  constexpr void __cordl_internal_set_contextData(Il2CppObject* value);

  constexpr void __cordl_internal_set_defaultContextData(Il2CppObject* value);

  constexpr void __cordl_internal_set_graph(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo value);

  constexpr void __cordl_internal_set_graphPassNamesForDebug(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* value);

  constexpr void __cordl_internal_set_m_BeginRenderPassAttachments(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> value);

  constexpr void __cordl_internal_set_m_CompilationCache(::GlobalNamespace::RenderGraphCompilationCache* value);

  constexpr void __cordl_internal_set_m_Disposed(bool value);

  constexpr void __cordl_internal_set_previousCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_toVisitPassIds(::System::Collections::Generic::Stack_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x65d07ec, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::RenderGraphCompilationCache* cache);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePassCompiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativePassCompiler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativePassCompiler(NativePassCompiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativePassCompiler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativePassCompiler(NativePassCompiler const&) = delete;

  /// @brief Field ArbitraryMaxNbMergedPasses offset 0xffffffff size 0x4
  static constexpr int32_t ArbitraryMaxNbMergedPasses{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12456 };

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

  /// @brief Field toVisitPassIds, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<int32_t>* ___toVisitPassIds;

  /// @brief Field m_CompilationCache, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::RenderGraphCompilationCache* ___m_CompilationCache;

  /// @brief Field m_BeginRenderPassAttachments, offset: 0x58, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> ___m_BeginRenderPassAttachments;

  /// @brief Field m_Disposed, offset: 0x60, size: 0x1, def value: None
  bool ___m_Disposed;

  /// @brief Field graphPassNamesForDebug, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* ___graphPassNamesForDebug;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___graph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___contextData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___defaultContextData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___previousCommandBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___toVisitPassIds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_CompilationCache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_BeginRenderPassAttachments) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___m_Disposed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, ___graphPassNamesForDebug) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_NativeCompilerProfileId,
                       "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "NativePassCompiler/NativeCompilerProfileId");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                       "NativePassCompiler");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler_RenderGraphInputInfo,
                       "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "NativePassCompiler/RenderGraphInputInfo");
