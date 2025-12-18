#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassAttachment_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraph)
namespace GlobalNamespace {
class RenderGraphCompilationCache;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2_ValueCollection;
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
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
class NativePassCompiler;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_BufferResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_PassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_PassScriptInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_ResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_TextureResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IComputeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRasterRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IUnsafeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ImportResourceParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class PassData_DebugData_RenderGraph_NRPInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RayTracingAccelerationStructureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphBuilders;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDefaultResources;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphParameters;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_CompiledGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraph_CompiledPassInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraph_CompiledResourceInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_ICompiledGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_OnExecutionRegisteredDelegate;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_OnGraphRegisteredDelegate;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_ProfilingScopePassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph___c;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTargetInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListDesc;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class DebugUI_Panel;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
struct GizmoSubset;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RendererListParams;
}
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
namespace UnityEngine::Rendering {
struct UISubset;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_BufferResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_PassScriptInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_TextureResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class PassData_DebugData_RenderGraph_NRPInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_CompiledGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_ICompiledGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_OnExecutionRegisteredDelegate;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_OnGraphRegisteredDelegate;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_ProfilingScopePassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph___c;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_PassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_ResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraph_CompiledPassInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraph_CompiledResourceInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/CompiledResourceInfo
struct CORDL_TYPE RenderGraph_CompiledResourceInfo {
public:
  // Declarations
  /// @brief Method Reset, addr 0x6623c50, size 0xe8, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_CompiledResourceInfo();

  // Ctor Parameters [CppParam { name: "producers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "consumers", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "imported",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderGraph_CompiledResourceInfo(::System::Collections::Generic::List_1<int32_t>* producers, ::System::Collections::Generic::List_1<int32_t>* consumers, int32_t refCount,
                                             bool imported) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12363 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field producers, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* producers;

  /// @brief Field consumers, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* consumers;

  /// @brief Field refCount, offset: 0x10, size: 0x4, def value: None
  int32_t refCount;

  /// @brief Field imported, offset: 0x14, size: 0x1, def value: None
  bool imported;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, producers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, consumers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, refCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, imported) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies UnityEngine.Rendering.GraphicsFence
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/CompiledPassInfo
struct CORDL_TYPE RenderGraph_CompiledPassInfo {
public:
  // Declarations
  /// @brief Method Reset, addr 0x6623d38, size 0x214, virtual false, abstract: false, final false
  inline void Reset(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass, int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_CompiledPassInfo();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "resourceCreateList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "resourceReleaseList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: None },
  // CppParam { name: "fence", ty: "::UnityEngine::Rendering::GraphicsFence", modifiers: "", def_value: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "enableAsyncCompute", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "allowPassCulling", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "needGraphicsFence", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "culledByRendererList", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "hasSideEffect", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enableFoveatedRasterization", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderGraph_CompiledPassInfo(::StringW name, int32_t index,
                                         ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceCreateList,
                                         ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReleaseList,
                                         ::UnityEngine::Rendering::GraphicsFence fence, int32_t refCount, int32_t syncToPassIndex, int32_t syncFromPassIndex, bool enableAsyncCompute,
                                         bool allowPassCulling, bool needGraphicsFence, bool culled, bool culledByRendererList, bool hasSideEffect, bool enableFoveatedRasterization) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12364 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief Field resourceCreateList, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceCreateList;

  /// @brief Field resourceReleaseList, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReleaseList;

  /// @brief Field fence, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::GraphicsFence fence;

  /// @brief Field refCount, offset: 0x30, size: 0x4, def value: None
  int32_t refCount;

  /// @brief Field syncToPassIndex, offset: 0x34, size: 0x4, def value: None
  int32_t syncToPassIndex;

  /// @brief Field syncFromPassIndex, offset: 0x38, size: 0x4, def value: None
  int32_t syncFromPassIndex;

  /// @brief Field enableAsyncCompute, offset: 0x3c, size: 0x1, def value: None
  bool enableAsyncCompute;

  /// @brief Field allowPassCulling, offset: 0x3d, size: 0x1, def value: None
  bool allowPassCulling;

  /// @brief Field needGraphicsFence, offset: 0x3e, size: 0x1, def value: None
  bool needGraphicsFence;

  /// @brief Field culled, offset: 0x3f, size: 0x1, def value: None
  bool culled;

  /// @brief Field culledByRendererList, offset: 0x40, size: 0x1, def value: None
  bool culledByRendererList;

  /// @brief Field hasSideEffect, offset: 0x41, size: 0x1, def value: None
  bool hasSideEffect;

  /// @brief Field enableFoveatedRasterization, offset: 0x42, size: 0x1, def value: None
  bool enableFoveatedRasterization;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, resourceCreateList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, resourceReleaseList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, fence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, refCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, syncToPassIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, syncFromPassIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, enableAsyncCompute) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, allowPassCulling) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, needGraphicsFence) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, culled) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, culledByRendererList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, hasSideEffect) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, enableFoveatedRasterization) == 0x42, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/ICompiledGraph
class CORDL_TYPE RenderGraph_ICompiledGraph {
public:
  // Declarations
  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_ICompiledGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_ICompiledGraph(RenderGraph_ICompiledGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12365 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/CompiledGraph
class CORDL_TYPE RenderGraph_CompiledGraph : public ::System::Object {
public:
  // Declarations
  /// @brief Field compiledPassInfos, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_compiledPassInfos,
      put = __cordl_internal_set_compiledPassInfos)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* compiledPassInfos;

  /// @brief Field compiledResourcesInfos, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_compiledResourcesInfos,
      put = __cordl_internal_set_compiledResourcesInfos)) ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*,
                                                                   ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>*>
      compiledResourcesInfos;

  /// @brief Field lastExecutionFrame, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lastExecutionFrame, put = __cordl_internal_set_lastExecutionFrame)) int32_t lastExecutionFrame;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*() noexcept;

  /// @brief Method Clear, addr 0x6624098, size 0xa0, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method InitResourceInfosData, addr 0x6624138, size 0xd8, virtual false, abstract: false, final false
  inline void InitResourceInfosData(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>* resourceInfos, int32_t count);

  /// @brief Method InitializeCompilationData, addr 0x6624210, size 0x1d4, virtual false, abstract: false, final false
  inline void InitializeCompilationData(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* passes,
                                        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* New_ctor();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* const& __cordl_internal_get_compiledPassInfos() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>*& __cordl_internal_get_compiledPassInfos();

  constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*,
                     ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>*> const&
  __cordl_internal_get_compiledResourcesInfos() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*,
                     ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>*>&
  __cordl_internal_get_compiledResourcesInfos();

  constexpr int32_t const& __cordl_internal_get_lastExecutionFrame() const;

  constexpr int32_t& __cordl_internal_get_lastExecutionFrame();

  constexpr void __cordl_internal_set_compiledPassInfos(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* value);

  constexpr void
  __cordl_internal_set_compiledResourcesInfos(::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*,
                                                       ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>*>
                                                  value);

  constexpr void __cordl_internal_set_lastExecutionFrame(int32_t value);

  /// @brief Method .ctor, addr 0x6623f4c, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph* i___UnityEngine__Rendering__RenderGraphModule__RenderGraph_ICompiledGraph() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_CompiledGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_CompiledGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_CompiledGraph(RenderGraph_CompiledGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_CompiledGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_CompiledGraph(RenderGraph_CompiledGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12366 };

  /// @brief Field compiledResourcesInfos, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*,
           ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>*>
      ___compiledResourcesInfos;

  /// @brief Field compiledPassInfos, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* ___compiledPassInfos;

  /// @brief Field lastExecutionFrame, offset: 0x20, size: 0x4, def value: None
  int32_t ___lastExecutionFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph, ___compiledResourcesInfos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph, ___compiledPassInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph, ___lastExecutionFrame) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/ProfilingScopePassData
class CORDL_TYPE RenderGraph_ProfilingScopePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field sampler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sampler, put = __cordl_internal_set_sampler)) ::UnityEngine::Rendering::ProfilingSampler* sampler;

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* New_ctor();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_sampler();

  constexpr void __cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x66243fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_ProfilingScopePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_ProfilingScopePassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_ProfilingScopePassData(RenderGraph_ProfilingScopePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_ProfilingScopePassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_ProfilingScopePassData(RenderGraph_ProfilingScopePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12367 };

  /// @brief Field sampler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___sampler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData, ___sampler) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/OnGraphRegisteredDelegate
class CORDL_TYPE RenderGraph_OnGraphRegisteredDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6624558, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6624578, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6624544, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6624400, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_OnGraphRegisteredDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_OnGraphRegisteredDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_OnGraphRegisteredDelegate(RenderGraph_OnGraphRegisteredDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_OnGraphRegisteredDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_OnGraphRegisteredDelegate(RenderGraph_OnGraphRegisteredDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/OnExecutionRegisteredDelegate
class CORDL_TYPE RenderGraph_OnExecutionRegisteredDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x66246e0, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::StringW executionName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6624708, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x66246cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::StringW executionName);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6624584, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_OnExecutionRegisteredDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_OnExecutionRegisteredDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_OnExecutionRegisteredDelegate(RenderGraph_OnExecutionRegisteredDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_OnExecutionRegisteredDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_OnExecutionRegisteredDelegate(RenderGraph_OnExecutionRegisteredDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassAttachment
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/AttachmentInfo
class CORDL_TYPE NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field attachment, offset 0x34, size 0x20
  __declspec(property(get = __cordl_internal_get_attachment,
                      put = __cordl_internal_set_attachment)) ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment attachment;

  /// @brief Field attachmentIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_attachmentIndex, put = __cordl_internal_set_attachmentIndex)) int32_t attachmentIndex;

  /// @brief Field loadReason, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_loadReason, put = __cordl_internal_set_loadReason)) ::StringW loadReason;

  /// @brief Field resourceName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceName, put = __cordl_internal_set_resourceName)) ::StringW resourceName;

  /// @brief Field storeMsaaReason, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_storeMsaaReason, put = __cordl_internal_set_storeMsaaReason)) ::StringW storeMsaaReason;

  /// @brief Field storeReason, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_storeReason, put = __cordl_internal_set_storeReason)) ::StringW storeReason;

  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment const& __cordl_internal_get_attachment() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment& __cordl_internal_get_attachment();

  constexpr int32_t const& __cordl_internal_get_attachmentIndex() const;

  constexpr int32_t& __cordl_internal_get_attachmentIndex();

  constexpr ::StringW const& __cordl_internal_get_loadReason() const;

  constexpr ::StringW& __cordl_internal_get_loadReason();

  constexpr ::StringW const& __cordl_internal_get_resourceName() const;

  constexpr ::StringW& __cordl_internal_get_resourceName();

  constexpr ::StringW const& __cordl_internal_get_storeMsaaReason() const;

  constexpr ::StringW& __cordl_internal_get_storeMsaaReason();

  constexpr ::StringW const& __cordl_internal_get_storeReason() const;

  constexpr ::StringW& __cordl_internal_get_storeReason();

  constexpr void __cordl_internal_set_attachment(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment value);

  constexpr void __cordl_internal_set_attachmentIndex(int32_t value);

  constexpr void __cordl_internal_set_loadReason(::StringW value);

  constexpr void __cordl_internal_set_resourceName(::StringW value);

  constexpr void __cordl_internal_set_storeMsaaReason(::StringW value);

  constexpr void __cordl_internal_set_storeReason(::StringW value);

  /// @brief Method .ctor, addr 0x6624aa0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo(NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo(NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12370 };

  /// @brief Field resourceName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourceName;

  /// @brief Field loadReason, offset: 0x18, size: 0x8, def value: None
  ::StringW ___loadReason;

  /// @brief Field storeReason, offset: 0x20, size: 0x8, def value: None
  ::StringW ___storeReason;

  /// @brief Field storeMsaaReason, offset: 0x28, size: 0x8, def value: None
  ::StringW ___storeMsaaReason;

  /// @brief Field attachmentIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___attachmentIndex;

  /// @brief Field attachment, offset: 0x34, size: 0x20, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment ___attachment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___resourceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___loadReason) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___storeReason) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___storeMsaaReason) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___attachmentIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___attachment) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/PassCompatibilityInfo
struct CORDL_TYPE NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo();

  // Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isCompatible", ty: "bool", modifiers: "", def_value: None }]
  constexpr NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo(::StringW message, bool isCompatible) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12371 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field message, offset: 0x0, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field isCompatible, offset: 0x8, size: 0x1, def value: None
  bool isCompatible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, isCompatible) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo
class CORDL_TYPE NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo : public ::System::Object {
public:
  // Declarations
  using AttachmentInfo = ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo;

  using PassCompatibilityInfo = ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo;

  /// @brief Field attachmentInfos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attachmentInfos, put = __cordl_internal_set_attachmentInfos)) ::System::Collections::Generic::List_1<
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* attachmentInfos;

  /// @brief Field mergedPassIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mergedPassIds, put = __cordl_internal_set_mergedPassIds)) ::System::Collections::Generic::List_1<int32_t>* mergedPassIds;

  /// @brief Field passBreakReasoning, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_passBreakReasoning, put = __cordl_internal_set_passBreakReasoning)) ::StringW passBreakReasoning;

  /// @brief Field passCompatibility, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_passCompatibility, put = __cordl_internal_set_passCompatibility)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>* passCompatibility;

  static inline ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* const&
  __cordl_internal_get_attachmentInfos() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>*&
  __cordl_internal_get_attachmentInfos();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_mergedPassIds() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_mergedPassIds();

  constexpr ::StringW const& __cordl_internal_get_passBreakReasoning() const;

  constexpr ::StringW& __cordl_internal_get_passBreakReasoning();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t,
                                                         ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>* const&
  __cordl_internal_get_passCompatibility() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>*&
  __cordl_internal_get_passCompatibility();

  constexpr void __cordl_internal_set_attachmentInfos(
      ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* value);

  constexpr void __cordl_internal_set_mergedPassIds(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_passBreakReasoning(::StringW value);

  constexpr void __cordl_internal_set_passCompatibility(
      ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>* value);

  /// @brief Method .ctor, addr 0x6624a9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo(NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo(NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12372 };

  /// @brief Field passBreakReasoning, offset: 0x10, size: 0x8, def value: None
  ::StringW ___passBreakReasoning;

  /// @brief Field attachmentInfos, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* ___attachmentInfos;

  /// @brief Field passCompatibility, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>*
      ___passCompatibility;

  /// @brief Field mergedPassIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___mergedPassIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, ___passBreakReasoning) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, ___attachmentInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, ___passCompatibility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, ___mergedPassIds) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo
class CORDL_TYPE PassData_DebugData_RenderGraph_NRPInfo : public ::System::Object {
public:
  // Declarations
  using NativeRenderPassInfo = ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo;

  /// @brief Field hasDepth, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDepth, put = __cordl_internal_set_hasDepth)) bool hasDepth;

  /// @brief Field height, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field nativePassInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nativePassInfo,
                      put = __cordl_internal_set_nativePassInfo)) ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* nativePassInfo;

  /// @brief Field samples, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_samples, put = __cordl_internal_set_samples)) int32_t samples;

  /// @brief Field setGlobals, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_setGlobals, put = __cordl_internal_set_setGlobals)) ::System::Collections::Generic::List_1<int32_t>* setGlobals;

  /// @brief Field textureFBFetchList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textureFBFetchList, put = __cordl_internal_set_textureFBFetchList)) ::System::Collections::Generic::List_1<int32_t>* textureFBFetchList;

  /// @brief Field volumeDepth, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_volumeDepth, put = __cordl_internal_set_volumeDepth)) int32_t volumeDepth;

  /// @brief Field width, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  static inline ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo* New_ctor();

  constexpr bool const& __cordl_internal_get_hasDepth() const;

  constexpr bool& __cordl_internal_get_hasDepth();

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* const& __cordl_internal_get_nativePassInfo() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*& __cordl_internal_get_nativePassInfo();

  constexpr int32_t const& __cordl_internal_get_samples() const;

  constexpr int32_t& __cordl_internal_get_samples();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_setGlobals() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_setGlobals();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_textureFBFetchList() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_textureFBFetchList();

  constexpr int32_t const& __cordl_internal_get_volumeDepth() const;

  constexpr int32_t& __cordl_internal_get_volumeDepth();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_hasDepth(bool value);

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_nativePassInfo(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* value);

  constexpr void __cordl_internal_set_samples(int32_t value);

  constexpr void __cordl_internal_set_setGlobals(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_textureFBFetchList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_volumeDepth(int32_t value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x6624a08, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PassData_DebugData_RenderGraph_NRPInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PassData_DebugData_RenderGraph_NRPInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PassData_DebugData_RenderGraph_NRPInfo(PassData_DebugData_RenderGraph_NRPInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PassData_DebugData_RenderGraph_NRPInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PassData_DebugData_RenderGraph_NRPInfo(PassData_DebugData_RenderGraph_NRPInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12373 };

  /// @brief Field nativePassInfo, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* ___nativePassInfo;

  /// @brief Field textureFBFetchList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___textureFBFetchList;

  /// @brief Field setGlobals, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___setGlobals;

  /// @brief Field width, offset: 0x28, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x2c, size: 0x4, def value: None
  int32_t ___height;

  /// @brief Field volumeDepth, offset: 0x30, size: 0x4, def value: None
  int32_t ___volumeDepth;

  /// @brief Field samples, offset: 0x34, size: 0x4, def value: None
  int32_t ___samples;

  /// @brief Field hasDepth, offset: 0x38, size: 0x1, def value: None
  bool ___hasDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___nativePassInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___textureFBFetchList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___setGlobals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___volumeDepth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___samples) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___hasDepth) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraphPassType
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData
struct CORDL_TYPE DebugData_RenderGraph_PassData {
public:
  // Declarations
  using NRPInfo = ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_PassData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType",
  // modifiers: "", def_value: None }, CppParam { name: "resourceReadLists", ty:
  // "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: None }, CppParam { name: "resourceWriteLists",
  // ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: None }, CppParam { name: "culled", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "async", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nativeSubPassIndex", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "generateDebugData", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nrpInfo", ty: "::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*",
  // modifiers: "", def_value: None }, CppParam { name: "scriptInfo", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*", modifiers: "", def_value: None }]
  constexpr DebugData_RenderGraph_PassData(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type,
                                           ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReadLists,
                                           ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceWriteLists, bool culled,
                                           bool async, int32_t nativeSubPassIndex, int32_t syncToPassIndex, int32_t syncFromPassIndex, bool generateDebugData,
                                           ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo* nrpInfo,
                                           ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo* scriptInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12374 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type;

  /// @brief Field resourceReadLists, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReadLists;

  /// @brief Field resourceWriteLists, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceWriteLists;

  /// @brief Field culled, offset: 0x20, size: 0x1, def value: None
  bool culled;

  /// @brief Field async, offset: 0x21, size: 0x1, def value: None
  bool async;

  /// @brief Field nativeSubPassIndex, offset: 0x24, size: 0x4, def value: None
  int32_t nativeSubPassIndex;

  /// @brief Field syncToPassIndex, offset: 0x28, size: 0x4, def value: None
  int32_t syncToPassIndex;

  /// @brief Field syncFromPassIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t syncFromPassIndex;

  /// @brief Field generateDebugData, offset: 0x30, size: 0x1, def value: None
  bool generateDebugData;

  /// @brief Field nrpInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo* nrpInfo;

  /// @brief Field scriptInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo* scriptInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, resourceReadLists) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, resourceWriteLists) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, culled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, async) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, nativeSubPassIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, syncToPassIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, syncFromPassIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, generateDebugData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, nrpInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, scriptInfo) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.GraphicsBuffer::Target, UnityEngine.GraphicsBuffer::UsageFlags
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/BufferResourceData
class CORDL_TYPE DebugData_RenderGraph_BufferResourceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field count, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field stride, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_stride, put = __cordl_internal_set_stride)) int32_t stride;

  /// @brief Field target, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::UnityEngine::GraphicsBuffer_Target target;

  /// @brief Field usage, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_usage, put = __cordl_internal_set_usage)) ::UnityEngine::GraphicsBuffer_UsageFlags usage;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_stride() const;

  constexpr int32_t& __cordl_internal_get_stride();

  constexpr ::UnityEngine::GraphicsBuffer_Target const& __cordl_internal_get_target() const;

  constexpr ::UnityEngine::GraphicsBuffer_Target& __cordl_internal_get_target();

  constexpr ::UnityEngine::GraphicsBuffer_UsageFlags const& __cordl_internal_get_usage() const;

  constexpr ::UnityEngine::GraphicsBuffer_UsageFlags& __cordl_internal_get_usage();

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_stride(int32_t value);

  constexpr void __cordl_internal_set_target(::UnityEngine::GraphicsBuffer_Target value);

  constexpr void __cordl_internal_set_usage(::UnityEngine::GraphicsBuffer_UsageFlags value);

  /// @brief Method .ctor, addr 0x6624aa4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_BufferResourceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_BufferResourceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData_RenderGraph_BufferResourceData(DebugData_RenderGraph_BufferResourceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_BufferResourceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData_RenderGraph_BufferResourceData(DebugData_RenderGraph_BufferResourceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12375 };

  /// @brief Field count, offset: 0x10, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field stride, offset: 0x14, size: 0x4, def value: None
  int32_t ___stride;

  /// @brief Field target, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::GraphicsBuffer_Target ___target;

  /// @brief Field usage, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::GraphicsBuffer_UsageFlags ___usage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, ___count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, ___stride) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, ___usage) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Experimental.Rendering.GraphicsFormat
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/TextureResourceData
class CORDL_TYPE DebugData_RenderGraph_TextureResourceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bindMS, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_bindMS, put = __cordl_internal_set_bindMS)) bool bindMS;

  /// @brief Field clearBuffer, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_clearBuffer, put = __cordl_internal_set_clearBuffer)) bool clearBuffer;

  /// @brief Field depth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field format, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_format, put = __cordl_internal_set_format)) ::UnityEngine::Experimental::Rendering::GraphicsFormat format;

  /// @brief Field height, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field samples, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_samples, put = __cordl_internal_set_samples)) int32_t samples;

  /// @brief Field width, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData* New_ctor();

  constexpr bool const& __cordl_internal_get_bindMS() const;

  constexpr bool& __cordl_internal_get_bindMS();

  constexpr bool const& __cordl_internal_get_clearBuffer() const;

  constexpr bool& __cordl_internal_get_clearBuffer();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_format() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_format();

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr int32_t const& __cordl_internal_get_samples() const;

  constexpr int32_t& __cordl_internal_get_samples();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_bindMS(bool value);

  constexpr void __cordl_internal_set_clearBuffer(bool value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_format(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_samples(int32_t value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x6624aa8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_TextureResourceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_TextureResourceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData_RenderGraph_TextureResourceData(DebugData_RenderGraph_TextureResourceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_TextureResourceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData_RenderGraph_TextureResourceData(DebugData_RenderGraph_TextureResourceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12376 };

  /// @brief Field width, offset: 0x10, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x14, size: 0x4, def value: None
  int32_t ___height;

  /// @brief Field depth, offset: 0x18, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field bindMS, offset: 0x1c, size: 0x1, def value: None
  bool ___bindMS;

  /// @brief Field samples, offset: 0x20, size: 0x4, def value: None
  int32_t ___samples;

  /// @brief Field format, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___format;

  /// @brief Field clearBuffer, offset: 0x28, size: 0x1, def value: None
  bool ___clearBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___width) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___height) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___depth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___bindMS) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___samples) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___format) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___clearBuffer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/ResourceData
struct CORDL_TYPE DebugData_RenderGraph_ResourceData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_ResourceData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "creationPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "releasePassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "consumerList", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "producerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "",
  // def_value: None }, CppParam { name: "memoryless", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "textureData", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*", modifiers: "", def_value: None }, CppParam { name: "bufferData", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*", modifiers: "", def_value: None }]
  constexpr DebugData_RenderGraph_ResourceData(::StringW name, bool imported, int32_t creationPassIndex, int32_t releasePassIndex, ::System::Collections::Generic::List_1<int32_t>* consumerList,
                                               ::System::Collections::Generic::List_1<int32_t>* producerList, bool memoryless,
                                               ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData* textureData,
                                               ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData* bufferData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12377 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field imported, offset: 0x8, size: 0x1, def value: None
  bool imported;

  /// @brief Field creationPassIndex, offset: 0xc, size: 0x4, def value: None
  int32_t creationPassIndex;

  /// @brief Field releasePassIndex, offset: 0x10, size: 0x4, def value: None
  int32_t releasePassIndex;

  /// @brief Field consumerList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* consumerList;

  /// @brief Field producerList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* producerList;

  /// @brief Field memoryless, offset: 0x28, size: 0x1, def value: None
  bool memoryless;

  /// @brief Field textureData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData* textureData;

  /// @brief Field bufferData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData* bufferData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, imported) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, creationPassIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, releasePassIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, consumerList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, producerList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, memoryless) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, textureData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, bufferData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassScriptInfo
class CORDL_TYPE DebugData_RenderGraph_PassScriptInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field filePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_filePath, put = __cordl_internal_set_filePath)) ::StringW filePath;

  /// @brief Field line, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_line, put = __cordl_internal_set_line)) int32_t line;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_filePath() const;

  constexpr ::StringW& __cordl_internal_get_filePath();

  constexpr int32_t const& __cordl_internal_get_line() const;

  constexpr int32_t& __cordl_internal_get_line();

  constexpr void __cordl_internal_set_filePath(::StringW value);

  constexpr void __cordl_internal_set_line(int32_t value);

  /// @brief Method .ctor, addr 0x6624aac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_PassScriptInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_PassScriptInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData_RenderGraph_PassScriptInfo(DebugData_RenderGraph_PassScriptInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_PassScriptInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData_RenderGraph_PassScriptInfo(DebugData_RenderGraph_PassScriptInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12378 };

  /// @brief Field filePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___filePath;

  /// @brief Field line, offset: 0x18, size: 0x4, def value: None
  int32_t ___line;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo, ___filePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo, ___line) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData
class CORDL_TYPE RenderGraph_DebugData : public ::System::Object {
public:
  // Declarations
  using BufferResourceData = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData;

  using PassData = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData;

  using PassScriptInfo = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo;

  using ResourceData = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData;

  using TextureResourceData = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData;

  /// @brief Field isNRPCompiler, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isNRPCompiler, put = __cordl_internal_set_isNRPCompiler)) bool isNRPCompiler;

  /// @brief Field passList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_passList,
                      put = __cordl_internal_set_passList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* passList;

  /// @brief Field resourceLists, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_resourceLists,
      put = __cordl_internal_set_resourceLists)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*,
                                                          ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*>*>
      resourceLists;

  /// @brief Field s_PassScriptMetadata, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PassScriptMetadata, put = setStaticF_s_PassScriptMetadata)) ::System::Collections::Generic::Dictionary_2<
      ::System::Object*, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>* s_PassScriptMetadata;

  /// @brief Method Clear, addr 0x6624878, size 0xdc, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* New_ctor();

  constexpr bool const& __cordl_internal_get_isNRPCompiler() const;

  constexpr bool& __cordl_internal_get_isNRPCompiler();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* const& __cordl_internal_get_passList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>*& __cordl_internal_get_passList();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*>*> const&
  __cordl_internal_get_resourceLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*>*>&
  __cordl_internal_get_resourceLists();

  constexpr void __cordl_internal_set_isNRPCompiler(bool value);

  constexpr void __cordl_internal_set_passList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* value);

  constexpr void __cordl_internal_set_resourceLists(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*,
                                                             ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*>*>
                                                        value);

  /// @brief Method .ctor, addr 0x6624714, size 0x164, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>* getStaticF_s_PassScriptMetadata();

  static inline void
  setStaticF_s_PassScriptMetadata(::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_DebugData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_DebugData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_DebugData(RenderGraph_DebugData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_DebugData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_DebugData(RenderGraph_DebugData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12379 };

  /// @brief Field passList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* ___passList;

  /// @brief Field resourceLists, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*>*>
      ___resourceLists;

  /// @brief Field isNRPCompiler, offset: 0x20, size: 0x1, def value: None
  bool ___isNRPCompiler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___passList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___resourceLists) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___isNRPCompiler) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/<>c
class CORDL_TYPE RenderGraph___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* __9;

  /// @brief Field <>9__110_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__110_0,
                      put = setStaticF___9__110_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* __9__110_0;

  /// @brief Field <>9__111_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__111_0,
                      put = setStaticF___9__111_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* __9__111_0;

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* New_ctor();

  /// @brief Method <BeginProfilingSampler>b__110_0, addr 0x6624b08, size 0x28, virtual false, abstract: false, final false
  inline void _BeginProfilingSampler_b__110_0(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* data,
                                              ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext ctx);

  /// @brief Method <EndProfilingSampler>b__111_0, addr 0x6624b48, size 0x28, virtual false, abstract: false, final false
  inline void _EndProfilingSampler_b__111_0(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* data, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext ctx);

  /// @brief Method .ctor, addr 0x6624b04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*
  getStaticF___9__110_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*
  getStaticF___9__111_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* value);

  static inline void setStaticF___9__110_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* value);

  static inline void setStaticF___9__111_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph___c(RenderGraph___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph___c(RenderGraph___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph
class CORDL_TYPE RenderGraph : public ::System::Object {
public:
  // Declarations
  using CompiledGraph = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph;

  using CompiledPassInfo = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo;

  using CompiledResourceInfo = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo;

  using DebugData = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData;

  using ICompiledGraph = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph;

  using OnExecutionRegisteredDelegate = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate;

  using OnGraphRegisteredDelegate = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate;

  using ProfilingScopePassData = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData;

  using __c = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c;

  /// @brief Field <enableValidityChecks>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__enableValidityChecks_k__BackingField, put = setStaticF__enableValidityChecks_k__BackingField)) bool _enableValidityChecks_k__BackingField;

  /// @brief Field <isRenderGraphViewerActive>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isRenderGraphViewerActive_k__BackingField, put = setStaticF__isRenderGraphViewerActive_k__BackingField)) bool _isRenderGraphViewerActive_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  /// @brief Field <nativeRenderPassesEnabled>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__nativeRenderPassesEnabled_k__BackingField,
                      put = __cordl_internal_set__nativeRenderPassesEnabled_k__BackingField)) bool _nativeRenderPassesEnabled_k__BackingField;

  __declspec(property(get = get_areAnySettingsActive)) bool areAnySettingsActive;

  __declspec(property(get = get_debugParams)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* debugParams;

  __declspec(property(get = get_defaultResources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources;

  /// @brief Field kMaxMRTCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kMaxMRTCount, put = setStaticF_kMaxMRTCount)) int32_t kMaxMRTCount;

  /// @brief Field k_PassNameDebugIgnoreList, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_k_PassNameDebugIgnoreList, put = __cordl_internal_set_k_PassNameDebugIgnoreList)) ::ArrayW<::StringW, ::Array<::StringW>*> k_PassNameDebugIgnoreList;

  /// @brief Field m_CaptureDebugDataForExecution, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CaptureDebugDataForExecution, put = __cordl_internal_set_m_CaptureDebugDataForExecution)) ::StringW m_CaptureDebugDataForExecution;

  /// @brief Field m_CompilationCache, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CompilationCache, put = __cordl_internal_set_m_CompilationCache)) ::GlobalNamespace::RenderGraphCompilationCache* m_CompilationCache;

  /// @brief Field m_CullingStack, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CullingStack, put = __cordl_internal_set_m_CullingStack)) ::System::Collections::Generic::Stack_1<int32_t>* m_CullingStack;

  /// @brief Field m_CurrentCompiledGraph, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentCompiledGraph,
                      put = __cordl_internal_set_m_CurrentCompiledGraph)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* m_CurrentCompiledGraph;

  /// @brief Field m_CurrentExecutionName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentExecutionName, put = __cordl_internal_set_m_CurrentExecutionName)) ::StringW m_CurrentExecutionName;

  /// @brief Field m_CurrentFrameIndex, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentFrameIndex, put = __cordl_internal_set_m_CurrentFrameIndex)) int32_t m_CurrentFrameIndex;

  /// @brief Field m_CurrentImmediatePassIndex, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentImmediatePassIndex, put = __cordl_internal_set_m_CurrentImmediatePassIndex)) int32_t m_CurrentImmediatePassIndex;

  /// @brief Field m_DebugData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugData,
                      put =
                          __cordl_internal_set_m_DebugData)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>* m_DebugData;

  /// @brief Field m_DebugParameters, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugParameters,
                      put = __cordl_internal_set_m_DebugParameters)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* m_DebugParameters;

  /// @brief Field m_DefaultCompiledGraph, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultCompiledGraph,
                      put = __cordl_internal_set_m_DefaultCompiledGraph)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* m_DefaultCompiledGraph;

  /// @brief Field m_DefaultProfilingSamplers, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DefaultProfilingSamplers,
      put = __cordl_internal_set_m_DefaultProfilingSamplers)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* m_DefaultProfilingSamplers;

  /// @brief Field m_DefaultResources, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultResources,
                      put = __cordl_internal_set_m_DefaultResources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* m_DefaultResources;

  /// @brief Field m_EnableCompilationCaching, offset 0xaf, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableCompilationCaching, put = __cordl_internal_set_m_EnableCompilationCaching)) bool m_EnableCompilationCaching;

  /// @brief Field m_ExecutionCount, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExecutionCount, put = __cordl_internal_set_m_ExecutionCount)) int32_t m_ExecutionCount;

  /// @brief Field m_ExecutionExceptionWasRaised, offset 0xac, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExecutionExceptionWasRaised, put = __cordl_internal_set_m_ExecutionExceptionWasRaised)) bool m_ExecutionExceptionWasRaised;

  /// @brief Field m_FrameInformationLogger, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FrameInformationLogger,
                      put = __cordl_internal_set_m_FrameInformationLogger)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* m_FrameInformationLogger;

  /// @brief Field m_HasRenderGraphBegun, offset 0xad, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasRenderGraphBegun, put = __cordl_internal_set_m_HasRenderGraphBegun)) bool m_HasRenderGraphBegun;

  /// @brief Field m_ImmediateModeResourceList, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImmediateModeResourceList,
                      put = __cordl_internal_set_m_ImmediateModeResourceList)) ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*>
      m_ImmediateModeResourceList;

  /// @brief Field m_PreviousCommandBuffer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousCommandBuffer, put = __cordl_internal_set_m_PreviousCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* m_PreviousCommandBuffer;

  /// @brief Field m_RenderGraphContext, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphContext,
                      put = __cordl_internal_set_m_RenderGraphContext)) ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* m_RenderGraphContext;

  /// @brief Field m_RenderGraphPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphPool,
                      put = __cordl_internal_set_m_RenderGraphPool)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* m_RenderGraphPool;

  /// @brief Field m_RenderPasses, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderPasses,
                      put = __cordl_internal_set_m_RenderPasses)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* m_RenderPasses;

  /// @brief Field m_RendererListCulling, offset 0xae, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RendererListCulling, put = __cordl_internal_set_m_RendererListCulling)) bool m_RendererListCulling;

  /// @brief Field m_RendererLists, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererLists,
                      put = __cordl_internal_set_m_RendererLists)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* m_RendererLists;

  /// @brief Field m_Resources, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resources, put = __cordl_internal_set_m_Resources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources;

  /// @brief Field m_TempMRTArrays, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_TempMRTArrays,
      put = __cordl_internal_set_m_TempMRTArrays)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                                                            ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
      m_TempMRTArrays;

  /// @brief Field m_builderInstance, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_builderInstance, put = __cordl_internal_set_m_builderInstance)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* m_builderInstance;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  /// @brief Field nativeCompiler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeCompiler,
                      put = __cordl_internal_set_nativeCompiler)) ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* nativeCompiler;

  __declspec(property(get = get_nativeRenderPassesEnabled, put = set_nativeRenderPassesEnabled)) bool nativeRenderPassesEnabled;

  /// @brief Field onDebugDataCaptured, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onDebugDataCaptured, put = setStaticF_onDebugDataCaptured)) ::System::Action* onDebugDataCaptured;

  /// @brief Field onExecutionRegistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onExecutionRegistered,
                      put = setStaticF_onExecutionRegistered)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* onExecutionRegistered;

  /// @brief Field onExecutionUnregistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onExecutionUnregistered,
                      put = setStaticF_onExecutionUnregistered)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* onExecutionUnregistered;

  /// @brief Field onGraphRegistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onGraphRegistered, put = setStaticF_onGraphRegistered)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* onGraphRegistered;

  /// @brief Field onGraphUnregistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onGraphUnregistered,
                      put = setStaticF_onGraphUnregistered)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* onGraphUnregistered;

  /// @brief Field registeredGlobals, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredGlobals,
                      put =
                          __cordl_internal_set_registeredGlobals)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* registeredGlobals;

  /// @brief Field s_RegisteredGraphs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RegisteredGraphs,
                      put = setStaticF_s_RegisteredGraphs)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* s_RegisteredGraphs;

  /// @brief Method AddComputePass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder* AddComputePass(::StringW passName, ::ByRef<PassData> passData, ::StringW file, int32_t line);

  /// @brief Method AddComputePass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder* AddComputePass(::StringW passName, ::ByRef<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                                 ::StringW file, int32_t line);

  /// @brief Method AddPassDebugMetadata, addr 0x66239e4, size 0x14c, virtual false, abstract: false, final false
  inline void AddPassDebugMetadata(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* renderPass, ::StringW file, int32_t line);

  /// @brief Method AddRasterRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* AddRasterRenderPass(::StringW passName, ::ByRef<PassData> passData, ::StringW file, int32_t line);

  /// @brief Method AddRasterRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* AddRasterRenderPass(::StringW passName, ::ByRef<PassData> passData,
                                                                                                     ::UnityEngine::Rendering::ProfilingSampler* sampler, ::StringW file, int32_t line);

  /// @brief Method AddRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData> inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder AddRenderPass(::StringW passName, ::ByRef<PassData> passData, ::StringW file, int32_t line);

  /// @brief Method AddRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder AddRenderPass(::StringW passName, ::ByRef<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                       ::StringW file, int32_t line);

  /// @brief Method AddUnsafePass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* AddUnsafePass(::StringW passName, ::ByRef<PassData> passData, ::StringW file, int32_t line);

  /// @brief Method AddUnsafePass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* AddUnsafePass(::StringW passName, ::ByRef<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                               ::StringW file, int32_t line);

  /// @brief Method AllGlobals, addr 0x6623914, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2_ValueCollection<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* AllGlobals();

  /// @brief Method AllocateCulledPassResources, addr 0x661f2c8, size 0x36c, virtual false, abstract: false, final false
  inline void AllocateCulledPassResources(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo);

  /// @brief Method AreRendererListsEmpty, addr 0x661ff64, size 0x1d4, virtual false, abstract: false, final false
  inline bool AreRendererListsEmpty(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* rendererLists);

  /// @brief Method BeginProfilingSampler, addr 0x661c540, size 0x210, virtual false, abstract: false, final false
  inline void BeginProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler, ::StringW file, int32_t line);

  /// @brief Method BeginRecording, addr 0x661b8d0, size 0x2c4, virtual false, abstract: false, final false
  inline void BeginRecording(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters> parameters);

  /// @brief Method Cleanup, addr 0x661ad14, size 0x110, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CleanupDebugData, addr 0x662245c, size 0x198, virtual false, abstract: false, final false
  inline void CleanupDebugData();

  /// @brief Method ClearCompiledGraph, addr 0x661c978, size 0xc, virtual false, abstract: false, final false
  inline void ClearCompiledGraph();

  /// @brief Method ClearCompiledGraph, addr 0x661c984, size 0xd4, virtual false, abstract: false, final false
  inline void ClearCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* compiledGraph, bool useCompilationCaching);

  /// @brief Method ClearGlobalBindings, addr 0x661c360, size 0x1e0, virtual false, abstract: false, final false
  inline void ClearGlobalBindings();

  /// @brief Method ClearPassDebugMetadata, addr 0x6623b30, size 0x80, virtual false, abstract: false, final false
  inline void ClearPassDebugMetadata();

  /// @brief Method ClearRenderPasses, addr 0x661ca58, size 0x15c, virtual false, abstract: false, final false
  inline void ClearRenderPasses();

  /// @brief Method CompileNativeRenderGraph, addr 0x6619fe0, size 0x2e4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* CompileNativeRenderGraph(int32_t graphHash);

  /// @brief Method CompilePassImmediatly, addr 0x6620448, size 0x800, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> CompilePassImmediatly(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method CompileRenderGraph, addr 0x661c128, size 0x128, virtual false, abstract: false, final false
  inline void CompileRenderGraph(int32_t graphHash);

  /// @brief Method ComputeGraphHash, addr 0x661c010, size 0x118, virtual false, abstract: false, final false
  inline int32_t ComputeGraphHash();

  /// @brief Method CountReferences, addr 0x661d584, size 0x6b4, virtual false, abstract: false, final false
  inline void CountReferences();

  /// @brief Method CreateBuffer, addr 0x660c8b0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc);

  /// @brief Method CreateBuffer, addr 0x661b814, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> graphicsBuffer);

  /// @brief Method CreateGizmoRendererList, addr 0x661b5dc, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateGizmoRendererList(::ByRef<::UnityEngine::Camera*> camera, ::ByRef<::UnityEngine::Rendering::GizmoSubset> gizmoSubset);

  /// @brief Method CreateRendererList, addr 0x661b584, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(::ByRef<::UnityEngine::Rendering::RendererListParams> desc);

  /// @brief Method CreateRendererList, addr 0x661b560, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(::ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  /// @brief Method CreateRendererLists, addr 0x661ee6c, size 0x148, virtual false, abstract: false, final false
  inline void CreateRendererLists();

  /// @brief Method CreateShadowRendererList, addr 0x661b5a8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateShadowRendererList(::ByRef<::UnityEngine::Rendering::ShadowDrawingSettings> shadowDrawingSettings);

  /// @brief Method CreateSharedTexture, addr 0x661b1fc, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateSharedTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, bool explicitRelease);

  /// @brief Method CreateSkyboxRendererList, addr 0x661b6c0, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::ByRef<::UnityEngine::Camera*> camera);

  /// @brief Method CreateSkyboxRendererList, addr 0x661b6f4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::ByRef<::UnityEngine::Camera*> camera, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                                  ::UnityEngine::Matrix4x4 viewMatrix);

  /// @brief Method CreateSkyboxRendererList, addr 0x661b75c, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::ByRef<::UnityEngine::Camera*> camera, ::UnityEngine::Matrix4x4 projectionMatrixL,
                                                                                                  ::UnityEngine::Matrix4x4 viewMatrixL, ::UnityEngine::Matrix4x4 projectionMatrixR,
                                                                                                  ::UnityEngine::Matrix4x4 viewMatrixR);

  /// @brief Method CreateTexture, addr 0x661b1e0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method CreateTexture, addr 0x661b320, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method CreateTextureIfInvalid, addr 0x661b384, size 0x140, virtual false, abstract: false, final false
  inline void CreateTextureIfInvalid(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method CreateUIOverlayRendererList, addr 0x661b614, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateUIOverlayRendererList(::ByRef<::UnityEngine::Camera*> camera);

  /// @brief Method CreateUIOverlayRendererList, addr 0x661b654, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateUIOverlayRendererList(::ByRef<::UnityEngine::Camera*> camera, ::ByRef<::UnityEngine::Rendering::UISubset> uiSubset);

  /// @brief Method CreateWireOverlayRendererList, addr 0x661b68c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateWireOverlayRendererList(::ByRef<::UnityEngine::Camera*> camera);

  /// @brief Method CullRendererLists, addr 0x662021c, size 0x118, virtual false, abstract: false, final false
  inline void CullRendererLists();

  /// @brief Method CullUnusedPasses, addr 0x661dc38, size 0x5b4, virtual false, abstract: false, final false
  inline void CullUnusedPasses();

  /// @brief Method EndFrame, addr 0x661af9c, size 0xcc, virtual false, abstract: false, final false
  inline void EndFrame();

  /// @brief Method EndProfilingSampler, addr 0x661c750, size 0x210, virtual false, abstract: false, final false
  inline void EndProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler, ::StringW file, int32_t line);

  /// @brief Method EndRecordingAndExecute, addr 0x661bdc8, size 0x4, virtual false, abstract: false, final false
  inline void EndRecordingAndExecute();

  /// @brief Method Execute, addr 0x661bdcc, size 0x244, virtual false, abstract: false, final false
  inline void Execute();

  /// @brief Method ExecuteCompiledPass, addr 0x6620c48, size 0x374, virtual false, abstract: false, final false
  inline void ExecuteCompiledPass(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo);

  /// @brief Method ExecuteNativeRenderGraph, addr 0x661a2c4, size 0x11c, virtual false, abstract: false, final false
  inline void ExecuteNativeRenderGraph();

  /// @brief Method ExecutePassImmediately, addr 0x661cc08, size 0x1c, virtual false, abstract: false, final false
  inline void ExecutePassImmediately(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method ExecuteRenderGraph, addr 0x661c250, size 0x110, virtual false, abstract: false, final false
  inline void ExecuteRenderGraph();

  /// @brief Method FindTextureProducer, addr 0x661ea5c, size 0x12c, virtual false, abstract: false, final false
  inline int32_t FindTextureProducer(int32_t consumerPass, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info, ::ByRef<int32_t> index);

  /// @brief Method GenerateCompilerDebugData, addr 0x66225f4, size 0x10f8, virtual false, abstract: false, final false
  inline void GenerateCompilerDebugData(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*> debugData);

  /// @brief Method GenerateDebugData, addr 0x6622224, size 0x238, virtual false, abstract: false, final false
  inline void GenerateDebugData();

  /// @brief Method GetBufferDesc, addr 0x661b868, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferDesc GetBufferDesc(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> graphicsBuffer);

  /// @brief Method GetCompiledPassInfos, addr 0x661c960, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* GetCompiledPassInfos();

  /// @brief Method GetDebugData, addr 0x661af20, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* GetDebugData(::StringW executionName);

  /// @brief Method GetDefaultProfilingSampler, addr 0x66220b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* GetDefaultProfilingSampler(::StringW name);

  /// @brief Method GetFirstValidConsumerIndex, addr 0x661e900, size 0x15c, virtual false, abstract: false, final false
  inline int32_t GetFirstValidConsumerIndex(int32_t passIndex, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetFirstValidWriteIndex, addr 0x661ec78, size 0x104, virtual false, abstract: false, final false
  inline int32_t GetFirstValidWriteIndex(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetGlobal, addr 0x6623968, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle GetGlobal(int32_t globalPropertyId);

  /// @brief Method GetImportedFallback, addr 0x661efb4, size 0x314, virtual false, abstract: false, final false
  inline bool GetImportedFallback(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> fallback);

  /// @brief Method GetLatestProducerIndex, addr 0x661e790, size 0x170, virtual false, abstract: false, final false
  inline int32_t GetLatestProducerIndex(int32_t passIndex, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetLatestValidReadIndex, addr 0x661eb88, size 0xf0, virtual false, abstract: false, final false
  inline int32_t GetLatestValidReadIndex(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetLatestValidWriteIndex, addr 0x661ed7c, size 0xf0, virtual false, abstract: false, final false
  inline int32_t GetLatestValidWriteIndex(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetRegisteredRenderGraphs, addr 0x661aec4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* GetRegisteredRenderGraphs();

  /// @brief Method GetRenderTargetInfo, addr 0x661b510, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo GetRenderTargetInfo(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method GetTextureDesc, addr 0x661b4c4, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc GetTextureDesc(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method GetWidgetList, addr 0x661ae2c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* GetWidgetList();

  /// @brief Method ImportBackbuffer, addr 0x661b180, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method ImportBackbuffer, addr 0x661b144, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams);

  /// @brief Method ImportBuffer, addr 0x661b7ec, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ImportBuffer(::UnityEngine::GraphicsBuffer* graphicsBuffer, bool forceRelease);

  /// @brief Method ImportRayTracingAccelerationStructure, addr 0x661b8ac, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
  ImportRayTracingAccelerationStructure(::ByRef<::UnityEngine::Rendering::RayTracingAccelerationStructure*> accelStruct, ::StringW name);

  /// @brief Method ImportTexture, addr 0x661b068, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt);

  /// @brief Method ImportTexture, addr 0x661b0a0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams);

  /// @brief Method ImportTexture, addr 0x661b0c8, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams);

  /// @brief Method ImportTexture, addr 0x661b108, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt, bool isBuiltin);

  /// @brief Method InvalidateContext, addr 0x661cbb4, size 0x1c, virtual false, abstract: false, final false
  inline void InvalidateContext();

  /// @brief Method IsGlobal, addr 0x6623898, size 0x7c, virtual false, abstract: false, final false
  inline bool IsGlobal(int32_t globalPropertyId);

  /// @brief Method LogCulledPasses, addr 0x661e1ec, size 0x440, virtual false, abstract: false, final false
  inline void LogCulledPasses();

  /// @brief Method LogFrameInformation, addr 0x661bbd4, size 0x1f4, virtual false, abstract: false, final false
  inline void LogFrameInformation();

  /// @brief Method LogRenderPassBegin, addr 0x6620fbc, size 0x348, virtual false, abstract: false, final false
  inline void LogRenderPassBegin(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo);

  /// @brief Method LogRendererListsCreation, addr 0x6620334, size 0x114, virtual false, abstract: false, final false
  inline void LogRendererListsCreation();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* New_ctor(::StringW name);

  /// @brief Method OnPassAdded, addr 0x661cbd0, size 0x38, virtual false, abstract: false, final false
  inline void OnPassAdded(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method PostRenderPassExecute, addr 0x6621610, size 0x3ac, virtual false, abstract: false, final false
  inline void PostRenderPassExecute(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext);

  /// @brief Method PreRenderPassExecute, addr 0x6621304, size 0x30c, virtual false, abstract: false, final false
  inline void PreRenderPassExecute(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                   ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext);

  /// @brief Method PreRenderPassSetRenderTargets, addr 0x66219bc, size 0x5a8, virtual false, abstract: false, final false
  inline void PreRenderPassSetRenderTargets(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo,
                                            ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass, ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext);

  /// @brief Method RefreshSharedTextureDesc, addr 0x661b26c, size 0x34, virtual false, abstract: false, final false
  inline void RefreshSharedTextureDesc(::UnityEngine::Rendering::RenderGraphModule::TextureHandle handle, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method RegisterDebug, addr 0x661ae90, size 0x20, virtual false, abstract: false, final false
  inline void RegisterDebug(::UnityEngine::Rendering::DebugUI_Panel* panel);

  /// @brief Method ReleaseImmediateModeResources, addr 0x6621f64, size 0x14c, virtual false, abstract: false, final false
  inline void ReleaseImmediateModeResources();

  /// @brief Method ReleaseSharedTexture, addr 0x661b2a0, size 0x80, virtual false, abstract: false, final false
  inline void ReleaseSharedTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method RequestCaptureDebugData, addr 0x661a400, size 0x8, virtual false, abstract: false, final false
  inline void RequestCaptureDebugData(::StringW executionName);

  /// @brief Method SetGlobal, addr 0x66236ec, size 0x1ac, virtual false, abstract: false, final false
  inline void SetGlobal(::UnityEngine::Rendering::RenderGraphModule::TextureHandle h, int32_t globalPropertyId);

  /// @brief Method TryCullPassAtIndex, addr 0x6620138, size 0xe4, virtual false, abstract: false, final false
  inline void TryCullPassAtIndex(int32_t passIndex);

  /// @brief Method UnRegisterDebug, addr 0x661aeb0, size 0x14, virtual false, abstract: false, final false
  inline void UnRegisterDebug();

  /// @brief Method UpdateAllSharedResourceLastFrameIndex, addr 0x661fe34, size 0x130, virtual false, abstract: false, final false
  inline void UpdateAllSharedResourceLastFrameIndex();

  /// @brief Method UpdateCurrentCompiledGraph, addr 0x661bb94, size 0x40, virtual false, abstract: false, final false
  inline bool UpdateCurrentCompiledGraph(int32_t graphHash, bool forceNoCaching);

  /// @brief Method UpdateImportedResourceLifeTime, addr 0x66220b8, size 0x16c, virtual false, abstract: false, final false
  inline void UpdateImportedResourceLifeTime(::ByRef<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData> data, ::System::Collections::Generic::List_1<int32_t>* passList);

  /// @brief Method UpdatePassSynchronization, addr 0x661e62c, size 0x28, virtual false, abstract: false, final false
  inline void UpdatePassSynchronization(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> currentPassInfo,
                                        ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> producerPassInfo, int32_t currentPassIndex, int32_t lastProducer,
                                        ::ByRef<int32_t> intLastSyncIndex);

  /// @brief Method UpdateResourceAllocationAndSynchronization, addr 0x661f634, size 0x800, virtual false, abstract: false, final false
  inline void UpdateResourceAllocationAndSynchronization();

  /// @brief Method UpdateResourceSynchronization, addr 0x661e654, size 0x13c, virtual false, abstract: false, final false
  inline void UpdateResourceSynchronization(::ByRef<int32_t> lastGraphicsPipeSync, ::ByRef<int32_t> lastComputePipeSync, int32_t currentPassIndex,
                                            ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> resource);

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr bool const& __cordl_internal_get__nativeRenderPassesEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__nativeRenderPassesEnabled_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_k_PassNameDebugIgnoreList() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_k_PassNameDebugIgnoreList();

  constexpr ::StringW const& __cordl_internal_get_m_CaptureDebugDataForExecution() const;

  constexpr ::StringW& __cordl_internal_get_m_CaptureDebugDataForExecution();

  constexpr ::GlobalNamespace::RenderGraphCompilationCache* const& __cordl_internal_get_m_CompilationCache() const;

  constexpr ::GlobalNamespace::RenderGraphCompilationCache*& __cordl_internal_get_m_CompilationCache();

  constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_m_CullingStack() const;

  constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_m_CullingStack();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* const& __cordl_internal_get_m_CurrentCompiledGraph() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*& __cordl_internal_get_m_CurrentCompiledGraph();

  constexpr ::StringW const& __cordl_internal_get_m_CurrentExecutionName() const;

  constexpr ::StringW& __cordl_internal_get_m_CurrentExecutionName();

  constexpr int32_t const& __cordl_internal_get_m_CurrentFrameIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentFrameIndex();

  constexpr int32_t const& __cordl_internal_get_m_CurrentImmediatePassIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentImmediatePassIndex();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>* const& __cordl_internal_get_m_DebugData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*& __cordl_internal_get_m_DebugData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* const& __cordl_internal_get_m_DebugParameters() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*& __cordl_internal_get_m_DebugParameters();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* const& __cordl_internal_get_m_DefaultCompiledGraph() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*& __cordl_internal_get_m_DefaultCompiledGraph();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* const& __cordl_internal_get_m_DefaultProfilingSamplers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>*& __cordl_internal_get_m_DefaultProfilingSamplers();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* const& __cordl_internal_get_m_DefaultResources() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*& __cordl_internal_get_m_DefaultResources();

  constexpr bool const& __cordl_internal_get_m_EnableCompilationCaching() const;

  constexpr bool& __cordl_internal_get_m_EnableCompilationCaching();

  constexpr int32_t const& __cordl_internal_get_m_ExecutionCount() const;

  constexpr int32_t& __cordl_internal_get_m_ExecutionCount();

  constexpr bool const& __cordl_internal_get_m_ExecutionExceptionWasRaised() const;

  constexpr bool& __cordl_internal_get_m_ExecutionExceptionWasRaised();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* const& __cordl_internal_get_m_FrameInformationLogger() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*& __cordl_internal_get_m_FrameInformationLogger();

  constexpr bool const& __cordl_internal_get_m_HasRenderGraphBegun() const;

  constexpr bool& __cordl_internal_get_m_HasRenderGraphBegun();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> const& __cordl_internal_get_m_ImmediateModeResourceList() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*>& __cordl_internal_get_m_ImmediateModeResourceList();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_PreviousCommandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_PreviousCommandBuffer();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* const& __cordl_internal_get_m_RenderGraphContext() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*& __cordl_internal_get_m_RenderGraphContext();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* const& __cordl_internal_get_m_RenderGraphPool() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*& __cordl_internal_get_m_RenderGraphPool();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* const& __cordl_internal_get_m_RenderPasses() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*& __cordl_internal_get_m_RenderPasses();

  constexpr bool const& __cordl_internal_get_m_RendererListCulling() const;

  constexpr bool& __cordl_internal_get_m_RendererListCulling();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* const& __cordl_internal_get_m_RendererLists() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*& __cordl_internal_get_m_RendererLists();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* const& __cordl_internal_get_m_Resources() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*& __cordl_internal_get_m_Resources();

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                     ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*> const&
  __cordl_internal_get_m_TempMRTArrays() const;

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                     ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>&
  __cordl_internal_get_m_TempMRTArrays();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* const& __cordl_internal_get_m_builderInstance() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*& __cordl_internal_get_m_builderInstance();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* const& __cordl_internal_get_nativeCompiler() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*& __cordl_internal_get_nativeCompiler();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* const& __cordl_internal_get_registeredGlobals() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*& __cordl_internal_get_registeredGlobals();

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__nativeRenderPassesEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set_k_PassNameDebugIgnoreList(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_CaptureDebugDataForExecution(::StringW value);

  constexpr void __cordl_internal_set_m_CompilationCache(::GlobalNamespace::RenderGraphCompilationCache* value);

  constexpr void __cordl_internal_set_m_CullingStack(::System::Collections::Generic::Stack_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_CurrentCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* value);

  constexpr void __cordl_internal_set_m_CurrentExecutionName(::StringW value);

  constexpr void __cordl_internal_set_m_CurrentFrameIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentImmediatePassIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DebugData(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>* value);

  constexpr void __cordl_internal_set_m_DebugParameters(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* value);

  constexpr void __cordl_internal_set_m_DefaultCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* value);

  constexpr void __cordl_internal_set_m_DefaultProfilingSamplers(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* value);

  constexpr void __cordl_internal_set_m_DefaultResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* value);

  constexpr void __cordl_internal_set_m_EnableCompilationCaching(bool value);

  constexpr void __cordl_internal_set_m_ExecutionCount(int32_t value);

  constexpr void __cordl_internal_set_m_ExecutionExceptionWasRaised(bool value);

  constexpr void __cordl_internal_set_m_FrameInformationLogger(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* value);

  constexpr void __cordl_internal_set_m_HasRenderGraphBegun(bool value);

  constexpr void __cordl_internal_set_m_ImmediateModeResourceList(::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> value);

  constexpr void __cordl_internal_set_m_PreviousCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_RenderGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* value);

  constexpr void __cordl_internal_set_m_RenderGraphPool(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* value);

  constexpr void __cordl_internal_set_m_RenderPasses(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* value);

  constexpr void __cordl_internal_set_m_RendererListCulling(bool value);

  constexpr void __cordl_internal_set_m_RendererLists(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* value);

  constexpr void __cordl_internal_set_m_Resources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

  constexpr void __cordl_internal_set_m_TempMRTArrays(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                                                               ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
                                                          value);

  constexpr void __cordl_internal_set_m_builderInstance(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* value);

  constexpr void __cordl_internal_set_nativeCompiler(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* value);

  constexpr void __cordl_internal_set_registeredGlobals(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* value);

  /// @brief Method .ctor, addr 0x661a590, size 0x784, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method add_onDebugDataCaptured, addr 0x661d3a4, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onDebugDataCaptured(::System::Action* value);

  /// @brief Method add_onExecutionRegistered, addr 0x661cfe4, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  /// @brief Method add_onExecutionUnregistered, addr 0x661d1c4, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onExecutionUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  /// @brief Method add_onGraphRegistered, addr 0x661cc24, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  /// @brief Method add_onGraphUnregistered, addr 0x661ce04, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  static inline bool getStaticF__enableValidityChecks_k__BackingField();

  static inline bool getStaticF__isRenderGraphViewerActive_k__BackingField();

  static inline int32_t getStaticF_kMaxMRTCount();

  static inline ::System::Action* getStaticF_onDebugDataCaptured();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* getStaticF_onExecutionRegistered();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* getStaticF_onExecutionUnregistered();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* getStaticF_onGraphRegistered();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* getStaticF_onGraphUnregistered();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* getStaticF_s_RegisteredGraphs();

  /// @brief Method get_areAnySettingsActive, addr 0x661ae48, size 0x48, virtual false, abstract: false, final false
  inline bool get_areAnySettingsActive();

  /// @brief Method get_debugParams, addr 0x661ae24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* get_debugParams();

  /// @brief Method get_defaultResources, addr 0x661a588, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* get_defaultResources();

  /// @brief Method get_enableValidityChecks, addr 0x661a4c8, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_enableValidityChecks();

  /// @brief Method get_isRenderGraphViewerActive, addr 0x661a408, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_isRenderGraphViewerActive();

  /// @brief Method get_name, addr 0x661a3f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_nativeRenderPassesEnabled, addr 0x661a3e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_nativeRenderPassesEnabled();

  /// @brief Method remove_onDebugDataCaptured, addr 0x661d494, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onDebugDataCaptured(::System::Action* value);

  /// @brief Method remove_onExecutionRegistered, addr 0x661d0d4, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  /// @brief Method remove_onExecutionUnregistered, addr 0x661d2b4, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onExecutionUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  /// @brief Method remove_onGraphRegistered, addr 0x661cd14, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  /// @brief Method remove_onGraphUnregistered, addr 0x661cef4, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  static inline void setStaticF__enableValidityChecks_k__BackingField(bool value);

  static inline void setStaticF__isRenderGraphViewerActive_k__BackingField(bool value);

  static inline void setStaticF_kMaxMRTCount(int32_t value);

  static inline void setStaticF_onDebugDataCaptured(::System::Action* value);

  static inline void setStaticF_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  static inline void setStaticF_onExecutionUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  static inline void setStaticF_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  static inline void setStaticF_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  static inline void setStaticF_s_RegisteredGraphs(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* value);

  /// @brief Method set_enableValidityChecks, addr 0x661a524, size 0x64, virtual false, abstract: false, final false
  static inline void set_enableValidityChecks(bool value);

  /// @brief Method set_isRenderGraphViewerActive, addr 0x661a464, size 0x64, virtual false, abstract: false, final false
  static inline void set_isRenderGraphViewerActive(bool value);

  /// @brief Method set_name, addr 0x661a3f8, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_nativeRenderPassesEnabled, addr 0x661a3e8, size 0x8, virtual false, abstract: false, final false
  inline void set_nativeRenderPassesEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph(RenderGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph(RenderGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12381 };

  /// @brief Field k_BeginProfilingSamplerPassName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_BeginProfilingSamplerPassName{ u"BeginProfile" };

  /// @brief Field k_EndProfilingSamplerPassName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_EndProfilingSamplerPassName{ u"EndProfile" };

  /// @brief Field nativeCompiler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* ___nativeCompiler;

  /// @brief Field <nativeRenderPassesEnabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____nativeRenderPassesEnabled_k__BackingField;

  /// @brief Field m_Resources, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* ___m_Resources;

  /// @brief Field m_RenderGraphPool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* ___m_RenderGraphPool;

  /// @brief Field m_builderInstance, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* ___m_builderInstance;

  /// @brief Field m_RenderPasses, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* ___m_RenderPasses;

  /// @brief Field m_RendererLists, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* ___m_RendererLists;

  /// @brief Field m_DebugParameters, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* ___m_DebugParameters;

  /// @brief Field m_FrameInformationLogger, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* ___m_FrameInformationLogger;

  /// @brief Field m_DefaultResources, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* ___m_DefaultResources;

  /// @brief Field m_DefaultProfilingSamplers, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* ___m_DefaultProfilingSamplers;

  /// @brief Field m_RenderGraphContext, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* ___m_RenderGraphContext;

  /// @brief Field m_PreviousCommandBuffer, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_PreviousCommandBuffer;

  /// @brief Field m_ImmediateModeResourceList, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> ___m_ImmediateModeResourceList;

  /// @brief Field m_CompilationCache, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::RenderGraphCompilationCache* ___m_CompilationCache;

  /// @brief Field m_TempMRTArrays, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
           ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
      ___m_TempMRTArrays;

  /// @brief Field m_CullingStack, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<int32_t>* ___m_CullingStack;

  /// @brief Field m_CurrentExecutionName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___m_CurrentExecutionName;

  /// @brief Field m_ExecutionCount, offset: 0xa0, size: 0x4, def value: None
  int32_t ___m_ExecutionCount;

  /// @brief Field m_CurrentFrameIndex, offset: 0xa4, size: 0x4, def value: None
  int32_t ___m_CurrentFrameIndex;

  /// @brief Field m_CurrentImmediatePassIndex, offset: 0xa8, size: 0x4, def value: None
  int32_t ___m_CurrentImmediatePassIndex;

  /// @brief Field m_ExecutionExceptionWasRaised, offset: 0xac, size: 0x1, def value: None
  bool ___m_ExecutionExceptionWasRaised;

  /// @brief Field m_HasRenderGraphBegun, offset: 0xad, size: 0x1, def value: None
  bool ___m_HasRenderGraphBegun;

  /// @brief Field m_RendererListCulling, offset: 0xae, size: 0x1, def value: None
  bool ___m_RendererListCulling;

  /// @brief Field m_EnableCompilationCaching, offset: 0xaf, size: 0x1, def value: None
  bool ___m_EnableCompilationCaching;

  /// @brief Field m_DefaultCompiledGraph, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* ___m_DefaultCompiledGraph;

  /// @brief Field m_CurrentCompiledGraph, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* ___m_CurrentCompiledGraph;

  /// @brief Field m_CaptureDebugDataForExecution, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___m_CaptureDebugDataForExecution;

  /// @brief Field m_DebugData, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>* ___m_DebugData;

  /// @brief Field <name>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field registeredGlobals, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* ___registeredGlobals;

  /// @brief Field k_PassNameDebugIgnoreList, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___k_PassNameDebugIgnoreList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___nativeCompiler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ____nativeRenderPassesEnabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_Resources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RenderGraphPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_builderInstance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RenderPasses) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RendererLists) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DebugParameters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_FrameInformationLogger) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DefaultResources) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DefaultProfilingSamplers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RenderGraphContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_PreviousCommandBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_ImmediateModeResourceList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CompilationCache) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_TempMRTArrays) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CullingStack) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentExecutionName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_ExecutionCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentFrameIndex) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentImmediatePassIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_ExecutionExceptionWasRaised) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_HasRenderGraphBegun) == 0xad, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RendererListCulling) == 0xae, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_EnableCompilationCaching) == 0xaf, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DefaultCompiledGraph) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentCompiledGraph) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CaptureDebugDataForExecution) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DebugData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ____name_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___registeredGlobals) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___k_PassNameDebugIgnoreList) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraph, 0xe8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/BufferResourceData");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/PassScriptInfo");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/TextureResourceData");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*, "UnityEngine.Rendering.RenderGraphModule",
                       "RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*, "UnityEngine.Rendering.RenderGraphModule",
                       "RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/AttachmentInfo");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/PassData/NRPInfo");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/CompiledGraph");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/ICompiledGraph");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/OnExecutionRegisteredDelegate");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/OnGraphRegisteredDelegate");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/ProfilingScopePassData");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/PassData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/ResourceData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, "UnityEngine.Rendering.RenderGraphModule",
                       "RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/PassCompatibilityInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/CompiledPassInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/CompiledResourceInfo");
