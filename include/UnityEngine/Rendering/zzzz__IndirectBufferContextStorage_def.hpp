#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContextStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectDrawInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectInstanceInfo_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectBufferContextStorage)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct IndirectBufferAllocInfo;
}
namespace UnityEngine::Rendering {
struct IndirectBufferContextHandles;
}
namespace UnityEngine::Rendering {
struct IndirectBufferContext;
}
namespace UnityEngine::Rendering {
struct IndirectBufferLimits;
}
namespace UnityEngine::Rendering {
struct IndirectDrawInfo;
}
namespace UnityEngine::Rendering {
struct IndirectInstanceInfo;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndirectBufferContextStorage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IndirectBufferContextStorage);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::IndirectBufferContextStorage, "UnityEngine.Rendering", "IndirectBufferContextStorage");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeHashMap`2<TKey, TValue>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.IndirectBufferAllocInfo,
// UnityEngine.Rendering.IndirectBufferContext, UnityEngine.Rendering.IndirectBufferLimits, UnityEngine.Rendering.IndirectDrawInfo, UnityEngine.Rendering.IndirectInstanceInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferContextStorage
struct CORDL_TYPE IndirectBufferContextStorage {
public:
  // Declarations
  __declspec(property(get = get_allocationCounters)) ::Unity::Collections::NativeArray_1<int32_t> allocationCounters;

  __declspec(property(get = get_dispatchArgsBuffer)) ::UnityEngine::GraphicsBuffer* dispatchArgsBuffer;

  __declspec(property(get = get_drawArgsBuffer)) ::UnityEngine::GraphicsBuffer* drawArgsBuffer;

  __declspec(property(get = get_drawInfoBuffer)) ::UnityEngine::GraphicsBuffer* drawInfoBuffer;

  __declspec(property(get = get_drawInfoGlobalArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> drawInfoGlobalArray;

  __declspec(property(get = get_indirectDrawArgsBufferHandle)) ::UnityEngine::GraphicsBufferHandle indirectDrawArgsBufferHandle;

  __declspec(property(get = get_instanceBuffer)) ::UnityEngine::GraphicsBuffer* instanceBuffer;

  __declspec(property(get = get_instanceInfoBuffer)) ::UnityEngine::GraphicsBuffer* instanceInfoBuffer;

  __declspec(property(get = get_instanceInfoGlobalArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> instanceInfoGlobalArray;

  __declspec(property(get = get_visibleInstanceBufferHandle)) ::UnityEngine::GraphicsBufferHandle visibleInstanceBufferHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AllocateDrawBuffers, addr 0x6c66830, size 0x154, virtual false, abstract: false, final false
  inline void AllocateDrawBuffers(int32_t maxDrawCount);

  /// @brief Method AllocateInstanceBuffers, addr 0x6c66700, size 0x130, virtual false, abstract: false, final false
  inline void AllocateInstanceBuffers(int32_t maxInstanceCount);

  /// @brief Method ClearContextsAndGrowBuffers, addr 0x6c66eec, size 0x20, virtual false, abstract: false, final false
  inline void ClearContextsAndGrowBuffers();

  /// @brief Method CopyFromStaging, addr 0x6c671bc, size 0xc0, virtual false, abstract: false, final false
  inline void CopyFromStaging(::UnityEngine::Rendering::CommandBuffer* cmd, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::IndirectBufferAllocInfo> allocInfo);

  /// @brief Method Dispose, addr 0x6c66b38, size 0xd0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeDrawBuffers, addr 0x6c66abc, size 0x7c, virtual false, abstract: false, final false
  inline void FreeDrawBuffers();

  /// @brief Method FreeInstanceBuffers, addr 0x6c66a4c, size 0x70, virtual false, abstract: false, final false
  inline void FreeInstanceBuffers();

  /// @brief Method GetAllocInfo, addr 0x6c67128, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndirectBufferAllocInfo GetAllocInfo(int32_t contextIndex);

  /// @brief Method GetAllocInfoSubArray, addr 0x6c670c8, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> GetAllocInfoSubArray(int32_t contextIndex);

  /// @brief Method GetBufferContext, addr 0x6c67290, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndirectBufferContext GetBufferContext(int32_t contextIndex);

  /// @brief Method GetLimits, addr 0x6c6727c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndirectBufferLimits GetLimits(int32_t contextIndex);

  /// @brief Method GrowBuffers, addr 0x6c66d28, size 0x1c4, virtual false, abstract: false, final false
  inline void GrowBuffers();

  /// @brief Method ImportBuffers, addr 0x6c664b0, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndirectBufferContextHandles ImportBuffers(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method Init, addr 0x6c665c4, size 0x13c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method ResetAllocators, addr 0x6c66984, size 0xc8, virtual false, abstract: false, final false
  inline void ResetAllocators();

  /// @brief Method SetBufferContext, addr 0x6c67370, size 0xd4, virtual false, abstract: false, final false
  inline void SetBufferContext(int32_t contextIndex, ::UnityEngine::Rendering::IndirectBufferContext ctx);

  /// @brief Method SyncContexts, addr 0x6c66c08, size 0x120, virtual false, abstract: false, final false
  inline void SyncContexts();

  /// @brief Method TryAllocateContext, addr 0x6c66f0c, size 0x148, virtual false, abstract: false, final false
  inline int32_t TryAllocateContext(int32_t viewID);

  /// @brief Method TryGetContextIndex, addr 0x6c67054, size 0x74, virtual false, abstract: false, final false
  inline int32_t TryGetContextIndex(int32_t viewID);

  /// @brief Method get_allocationCounters, addr 0x6c665b8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> get_allocationCounters();

  /// @brief Method get_dispatchArgsBuffer, addr 0x6c66468, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_dispatchArgsBuffer();

  /// @brief Method get_drawArgsBuffer, addr 0x6c66470, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_drawArgsBuffer();

  /// @brief Method get_drawInfoBuffer, addr 0x6c66478, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_drawInfoBuffer();

  /// @brief Method get_drawInfoGlobalArray, addr 0x6c665ac, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> get_drawInfoGlobalArray();

  /// @brief Method get_indirectDrawArgsBufferHandle, addr 0x6c66498, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle get_indirectDrawArgsBufferHandle();

  /// @brief Method get_instanceBuffer, addr 0x6c66458, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_instanceBuffer();

  /// @brief Method get_instanceInfoBuffer, addr 0x6c66460, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_instanceInfoBuffer();

  /// @brief Method get_instanceInfoGlobalArray, addr 0x6c665a0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> get_instanceInfoGlobalArray();

  /// @brief Method get_visibleInstanceBufferHandle, addr 0x6c66480, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle get_visibleInstanceBufferHandle();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectBufferContextStorage();

  // Ctor Parameters [CppParam { name: "m_BufferLimits", ty: "::UnityEngine::Rendering::IndirectBufferLimits", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceBuffer", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_InstanceInfoStaging", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo>", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "m_DispatchArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawArgsBuffer", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_DrawInfoStaging", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo>", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_ContextAllocCounter", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ContextIndexFromViewID", ty:
  // "::Unity::Collections::NativeHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Contexts", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::IndirectBufferContext>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ContextAllocInfo", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AllocationCounters", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
  constexpr IndirectBufferContextStorage(::UnityEngine::Rendering::IndirectBufferLimits m_BufferLimits, ::UnityEngine::GraphicsBuffer* m_InstanceBuffer,
                                         ::UnityEngine::GraphicsBuffer* m_InstanceInfoBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> m_InstanceInfoStaging,
                                         ::UnityEngine::GraphicsBuffer* m_DispatchArgsBuffer, ::UnityEngine::GraphicsBuffer* m_DrawArgsBuffer, ::UnityEngine::GraphicsBuffer* m_DrawInfoBuffer,
                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> m_DrawInfoStaging, int32_t m_ContextAllocCounter,
                                         ::Unity::Collections::NativeHashMap_2<int32_t, int32_t> m_ContextIndexFromViewID,
                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::IndirectBufferContext> m_Contexts,
                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> m_ContextAllocInfo,
                                         ::Unity::Collections::NativeArray_1<int32_t> m_AllocationCounters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field kAllocatorCount offset 0xffffffff size 0x4
  static constexpr int32_t kAllocatorCount{ static_cast<int32_t>(0x2) };

  /// @brief Field kInstanceInfoGpuOffsetMultiplier offset 0xffffffff size 0x4
  static constexpr int32_t kInstanceInfoGpuOffsetMultiplier{ static_cast<int32_t>(0x2) };

  /// @brief Field m_BufferLimits, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::IndirectBufferLimits m_BufferLimits;

  /// @brief Field m_InstanceBuffer, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* m_InstanceBuffer;

  /// @brief Field m_InstanceInfoBuffer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* m_InstanceInfoBuffer;

  /// @brief Field m_InstanceInfoStaging, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> m_InstanceInfoStaging;

  /// @brief Field m_DispatchArgsBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* m_DispatchArgsBuffer;

  /// @brief Field m_DrawArgsBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* m_DrawArgsBuffer;

  /// @brief Field m_DrawInfoBuffer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* m_DrawInfoBuffer;

  /// @brief Field m_DrawInfoStaging, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> m_DrawInfoStaging;

  /// @brief Field m_ContextAllocCounter, offset: 0x50, size: 0x4, def value: None
  int32_t m_ContextAllocCounter;

  /// @brief Field m_ContextIndexFromViewID, offset: 0x58, size: 0x8, def value: None
  ::Unity::Collections::NativeHashMap_2<int32_t, int32_t> m_ContextIndexFromViewID;

  /// @brief Field m_Contexts, offset: 0x60, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::IndirectBufferContext> m_Contexts;

  /// @brief Field m_ContextAllocInfo, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> m_ContextAllocInfo;

  /// @brief Field m_AllocationCounters, offset: 0x78, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_AllocationCounters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_BufferLimits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_InstanceBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_InstanceInfoBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_InstanceInfoStaging) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_DispatchArgsBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_DrawArgsBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_DrawInfoBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_DrawInfoStaging) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_ContextAllocCounter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_ContextIndexFromViewID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_Contexts) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_ContextAllocInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_AllocationCounters) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::IndirectBufferContextStorage) == 0x88, "Size mismatch!");

} // namespace UnityEngine::Rendering
