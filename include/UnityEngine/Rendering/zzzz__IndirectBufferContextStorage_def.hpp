#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContextStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeHashMap`2<TKey, TValue>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.IndirectBufferAllocInfo,
// UnityEngine.Rendering.IndirectBufferContext, UnityEngine.Rendering.IndirectBufferLimits, UnityEngine.Rendering.IndirectDrawInfo, UnityEngine.Rendering.IndirectInstanceInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferContextStorage
struct CORDL_TYPE IndirectBufferContextStorage {
public:
  // Declarations
  __declspec(property(get = get_allocationCounters)) ::Unity::Collections::NativeArray_1<int32_t> allocationCounters;

  __declspec(property(get = get_argsBuffer)) ::UnityEngine::GraphicsBuffer* argsBuffer;

  __declspec(property(get = get_drawInfoBuffer)) ::UnityEngine::GraphicsBuffer* drawInfoBuffer;

  __declspec(property(get = get_drawInfoGlobalArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> drawInfoGlobalArray;

  __declspec(property(get = get_indirectArgsBufferHandle)) ::UnityEngine::GraphicsBufferHandle indirectArgsBufferHandle;

  __declspec(property(get = get_instanceBuffer)) ::UnityEngine::GraphicsBuffer* instanceBuffer;

  __declspec(property(get = get_instanceInfoBuffer)) ::UnityEngine::GraphicsBuffer* instanceInfoBuffer;

  __declspec(property(get = get_instanceInfoGlobalArray)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> instanceInfoGlobalArray;

  __declspec(property(get = get_visibleInstanceBufferHandle)) ::UnityEngine::GraphicsBufferHandle visibleInstanceBufferHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AllocateDrawBuffers, addr 0x6679188, size 0x134, virtual false, abstract: false, final false
  inline void AllocateDrawBuffers(int32_t maxDrawCount);

  /// @brief Method AllocateInstanceBuffers, addr 0x6679058, size 0x130, virtual false, abstract: false, final false
  inline void AllocateInstanceBuffers(int32_t maxInstanceCount);

  /// @brief Method ClearContextsAndGrowBuffers, addr 0x6679818, size 0x20, virtual false, abstract: false, final false
  inline void ClearContextsAndGrowBuffers();

  /// @brief Method CopyFromStaging, addr 0x6679ae8, size 0xc0, virtual false, abstract: false, final false
  inline void CopyFromStaging(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::IndirectBufferAllocInfo> allocInfo);

  /// @brief Method Dispose, addr 0x6679464, size 0xd0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeDrawBuffers, addr 0x66793f4, size 0x70, virtual false, abstract: false, final false
  inline void FreeDrawBuffers();

  /// @brief Method FreeInstanceBuffers, addr 0x6679384, size 0x70, virtual false, abstract: false, final false
  inline void FreeInstanceBuffers();

  /// @brief Method GetAllocInfo, addr 0x6679a54, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndirectBufferAllocInfo GetAllocInfo(int32_t contextIndex);

  /// @brief Method GetAllocInfoSubArray, addr 0x66799f4, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> GetAllocInfoSubArray(int32_t contextIndex);

  /// @brief Method GetBufferContext, addr 0x6679bbc, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndirectBufferContext GetBufferContext(int32_t contextIndex);

  /// @brief Method GetLimits, addr 0x6679ba8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndirectBufferLimits GetLimits(int32_t contextIndex);

  /// @brief Method GrowBuffers, addr 0x6679654, size 0x1c4, virtual false, abstract: false, final false
  inline void GrowBuffers();

  /// @brief Method ImportBuffers, addr 0x6678e24, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndirectBufferContextHandles ImportBuffers(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method Init, addr 0x6678f1c, size 0x13c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method ResetAllocators, addr 0x66792bc, size 0xc8, virtual false, abstract: false, final false
  inline void ResetAllocators();

  /// @brief Method SetBufferContext, addr 0x6679c9c, size 0xd4, virtual false, abstract: false, final false
  inline void SetBufferContext(int32_t contextIndex, ::UnityEngine::Rendering::IndirectBufferContext ctx);

  /// @brief Method SyncContexts, addr 0x6679534, size 0x120, virtual false, abstract: false, final false
  inline void SyncContexts();

  /// @brief Method TryAllocateContext, addr 0x6679838, size 0x148, virtual false, abstract: false, final false
  inline int32_t TryAllocateContext(int32_t viewID);

  /// @brief Method TryGetContextIndex, addr 0x6679980, size 0x74, virtual false, abstract: false, final false
  inline int32_t TryGetContextIndex(int32_t viewID);

  /// @brief Method get_allocationCounters, addr 0x6678f10, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> get_allocationCounters();

  /// @brief Method get_argsBuffer, addr 0x6678de4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_argsBuffer();

  /// @brief Method get_drawInfoBuffer, addr 0x6678dec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_drawInfoBuffer();

  /// @brief Method get_drawInfoGlobalArray, addr 0x6678f04, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> get_drawInfoGlobalArray();

  /// @brief Method get_indirectArgsBufferHandle, addr 0x6678e0c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle get_indirectArgsBufferHandle();

  /// @brief Method get_instanceBuffer, addr 0x6678dd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_instanceBuffer();

  /// @brief Method get_instanceInfoBuffer, addr 0x6678ddc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_instanceInfoBuffer();

  /// @brief Method get_instanceInfoGlobalArray, addr 0x6678ef8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> get_instanceInfoGlobalArray();

  /// @brief Method get_visibleInstanceBufferHandle, addr 0x6678df4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBufferHandle get_visibleInstanceBufferHandle();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectBufferContextStorage();

  // Ctor Parameters [CppParam { name: "m_BufferLimits", ty: "::UnityEngine::Rendering::IndirectBufferLimits", modifiers: "", def_value: None }, CppParam { name: "m_InstanceBuffer", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_InstanceInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam {
  // name: "m_InstanceInfoStaging", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo>", modifiers: "", def_value: None }, CppParam { name: "m_ArgsBuffer", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_DrawInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name:
  // "m_DrawInfoStaging", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo>", modifiers: "", def_value: None }, CppParam { name: "m_ContextAllocCounter", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ContextIndexFromViewID", ty: "::Unity::Collections::NativeHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam
  // { name: "m_Contexts", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::IndirectBufferContext>", modifiers: "", def_value: None }, CppParam { name: "m_ContextAllocInfo", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo>", modifiers: "", def_value: None }, CppParam { name: "m_AllocationCounters", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr IndirectBufferContextStorage(::UnityEngine::Rendering::IndirectBufferLimits m_BufferLimits, ::UnityEngine::GraphicsBuffer* m_InstanceBuffer,
                                         ::UnityEngine::GraphicsBuffer* m_InstanceInfoBuffer, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> m_InstanceInfoStaging,
                                         ::UnityEngine::GraphicsBuffer* m_ArgsBuffer, ::UnityEngine::GraphicsBuffer* m_DrawInfoBuffer,
                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> m_DrawInfoStaging, int32_t m_ContextAllocCounter,
                                         ::Unity::Collections::NativeHashMap_2<int32_t, int32_t> m_ContextIndexFromViewID,
                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::IndirectBufferContext> m_Contexts,
                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> m_ContextAllocInfo,
                                         ::Unity::Collections::NativeArray_1<int32_t> m_AllocationCounters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17716 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field kAllocatorCount offset 0xffffffff size 0x4
  static constexpr int32_t kAllocatorCount{ static_cast<int32_t>(0x2) };

  /// @brief Field kExtraDrawAllocationCount offset 0xffffffff size 0x4
  static constexpr int32_t kExtraDrawAllocationCount{ static_cast<int32_t>(0x1) };

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

  /// @brief Field m_ArgsBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* m_ArgsBuffer;

  /// @brief Field m_DrawInfoBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* m_DrawInfoBuffer;

  /// @brief Field m_DrawInfoStaging, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> m_DrawInfoStaging;

  /// @brief Field m_ContextAllocCounter, offset: 0x48, size: 0x4, def value: None
  int32_t m_ContextAllocCounter;

  /// @brief Field m_ContextIndexFromViewID, offset: 0x50, size: 0x8, def value: None
  ::Unity::Collections::NativeHashMap_2<int32_t, int32_t> m_ContextIndexFromViewID;

  /// @brief Field m_Contexts, offset: 0x58, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::IndirectBufferContext> m_Contexts;

  /// @brief Field m_ContextAllocInfo, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> m_ContextAllocInfo;

  /// @brief Field m_AllocationCounters, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_AllocationCounters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_BufferLimits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_InstanceBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_InstanceInfoBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_InstanceInfoStaging) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_ArgsBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_DrawInfoBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_DrawInfoStaging) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_ContextAllocCounter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_ContextIndexFromViewID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_Contexts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_ContextAllocInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContextStorage, m_AllocationCounters) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IndirectBufferContextStorage, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndirectBufferContextStorage, "UnityEngine.Rendering", "IndirectBufferContextStorage");
