#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUPrefixSum)
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_DirectArgs;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_IndirectDirectArgs;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_LevelOffsets;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_RenderGraphResources;
}
namespace UnityEngine::Rendering {
class GPUPrefixSum_ShaderDefs;
}
namespace UnityEngine::Rendering {
class GPUPrefixSum_ShaderIDs;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_SupportResources;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_SystemResources;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUPrefixSum_ShaderDefs;
}
namespace UnityEngine::Rendering {
class GPUPrefixSum_ShaderIDs;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_DirectArgs;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_IndirectDirectArgs;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_LevelOffsets;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_RenderGraphResources;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_SupportResources;
}
namespace UnityEngine::Rendering {
struct GPUPrefixSum_SystemResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs);
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs);
MARK_VAL_T(::UnityEngine::Rendering::GPUPrefixSum);
MARK_VAL_T(::UnityEngine::Rendering::GPUPrefixSum_DirectArgs);
MARK_VAL_T(::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs);
MARK_VAL_T(::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets);
MARK_VAL_T(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources);
MARK_VAL_T(::UnityEngine::Rendering::GPUPrefixSum_SupportResources);
MARK_VAL_T(::UnityEngine::Rendering::GPUPrefixSum_SystemResources);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUPrefixSum/ShaderDefs
class CORDL_TYPE GPUPrefixSum_ShaderDefs : public ::System::Object {
public:
  // Declarations
  /// @brief Method AlignUpGroup, addr 0x660c4f4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t AlignUpGroup(int32_t value);

  /// @brief Method CalculateTotalBufferSize, addr 0x660c50c, size 0x58, virtual false, abstract: false, final false
  static inline void CalculateTotalBufferSize(int32_t maxElementCount, ::ByRef<int32_t> totalSize, ::ByRef<int32_t> levelCounts);

  /// @brief Method DivUpGroup, addr 0x660c4dc, size 0x18, virtual false, abstract: false, final false
  static inline int32_t DivUpGroup(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum_ShaderDefs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUPrefixSum_ShaderDefs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUPrefixSum_ShaderDefs(GPUPrefixSum_ShaderDefs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUPrefixSum_ShaderDefs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUPrefixSum_ShaderDefs(GPUPrefixSum_ShaderDefs const&) = delete;

  /// @brief Field ArgsBufferLower offset 0xffffffff size 0x4
  static constexpr int32_t ArgsBufferLower{ static_cast<int32_t>(0x8) };

  /// @brief Field ArgsBufferStride offset 0xffffffff size 0x4
  static constexpr int32_t ArgsBufferStride{ static_cast<int32_t>(0x10) };

  /// @brief Field ArgsBufferUpper offset 0xffffffff size 0x4
  static constexpr int32_t ArgsBufferUpper{ static_cast<int32_t>(0x0) };

  /// @brief Field GroupSize offset 0xffffffff size 0x4
  static constexpr int32_t GroupSize{ static_cast<int32_t>(0x80) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12257 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/LevelOffsets
struct CORDL_TYPE GPUPrefixSum_LevelOffsets {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum_LevelOffsets();

  // Ctor Parameters [CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "parentOffset", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GPUPrefixSum_LevelOffsets(uint32_t count, uint32_t offset, uint32_t parentOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12258 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field count, offset: 0x0, size: 0x4, def value: None
  uint32_t count;

  /// @brief Field offset, offset: 0x4, size: 0x4, def value: None
  uint32_t offset;

  /// @brief Field parentOffset, offset: 0x8, size: 0x4, def value: None
  uint32_t parentOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets, offset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets, parentOffset) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/RenderGraphResources
struct CORDL_TYPE GPUPrefixSum_RenderGraphResources {
public:
  // Declarations
  __declspec(property(get = get_output)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle output;

  /// @brief Method Create, addr 0x660c574, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources Create(int32_t newMaxElementCount, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder builder, bool outputIsTemp);

  /// @brief Method Initialize, addr 0x660c5d0, size 0x2e0, virtual false, abstract: false, final false
  inline void Initialize(int32_t newMaxElementCount, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder builder,
                         bool outputIsTemp);

  /// @brief Method get_output, addr 0x660c564, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle get_output();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum_RenderGraphResources();

  // Ctor Parameters [CppParam { name: "alignedElementCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxBufferCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "maxLevelCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefixBuffer0", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers:
  // "", def_value: None }, CppParam { name: "prefixBuffer1", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }, CppParam { name:
  // "totalLevelCountBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }, CppParam { name: "levelOffsetBuffer", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }, CppParam { name: "indirectDispatchArgsBuffer", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }]
  constexpr GPUPrefixSum_RenderGraphResources(int32_t alignedElementCount, int32_t maxBufferCount, int32_t maxLevelCount, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle prefixBuffer0,
                                              ::UnityEngine::Rendering::RenderGraphModule::BufferHandle prefixBuffer1, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle totalLevelCountBuffer,
                                              ::UnityEngine::Rendering::RenderGraphModule::BufferHandle levelOffsetBuffer,
                                              ::UnityEngine::Rendering::RenderGraphModule::BufferHandle indirectDispatchArgsBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12259 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field alignedElementCount, offset: 0x0, size: 0x4, def value: None
  int32_t alignedElementCount;

  /// @brief Field maxBufferCount, offset: 0x4, size: 0x4, def value: None
  int32_t maxBufferCount;

  /// @brief Field maxLevelCount, offset: 0x8, size: 0x4, def value: None
  int32_t maxLevelCount;

  /// @brief Field prefixBuffer0, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle prefixBuffer0;

  /// @brief Field prefixBuffer1, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle prefixBuffer1;

  /// @brief Field totalLevelCountBuffer, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle totalLevelCountBuffer;

  /// @brief Field levelOffsetBuffer, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle levelOffsetBuffer;

  /// @brief Field indirectDispatchArgsBuffer, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle indirectDispatchArgsBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, alignedElementCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, maxBufferCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, maxLevelCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, prefixBuffer0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, prefixBuffer1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, totalLevelCountBuffer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, levelOffsetBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, indirectDispatchArgsBuffer) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/SupportResources
struct CORDL_TYPE GPUPrefixSum_SupportResources {
public:
  // Declarations
  __declspec(property(get = get_output)) ::UnityEngine::GraphicsBuffer* output;

  /// @brief Method Create, addr 0x660c8e0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUPrefixSum_SupportResources Create(int32_t maxElementCount);

  /// @brief Method Dispose, addr 0x660ccb8, size 0x78, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Load, addr 0x660cb78, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUPrefixSum_SupportResources Load(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources shaderGraphResources);

  /// @brief Method LoadFromShaderGraph, addr 0x660cbd4, size 0xe4, virtual false, abstract: false, final false
  inline void LoadFromShaderGraph(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources shaderGraphResources);

  /// @brief Method Resize, addr 0x660c93c, size 0x23c, virtual false, abstract: false, final false
  inline void Resize(int32_t newMaxElementCount);

  /// @brief Method <Dispose>g__TryFreeBuffer|15_0, addr 0x660cd30, size 0x10, virtual false, abstract: false, final false
  static inline void _Dispose_g__TryFreeBuffer_15_0(::UnityEngine::GraphicsBuffer* resource);

  /// @brief Method get_output, addr 0x660c8d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_output();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum_SupportResources();

  // Ctor Parameters [CppParam { name: "ownsResources", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "alignedElementCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "maxBufferCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxLevelCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefixBuffer0", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "prefixBuffer1", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name:
  // "totalLevelCountBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "levelOffsetBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "",
  // def_value: None }, CppParam { name: "indirectDispatchArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }]
  constexpr GPUPrefixSum_SupportResources(bool ownsResources, int32_t alignedElementCount, int32_t maxBufferCount, int32_t maxLevelCount, ::UnityEngine::GraphicsBuffer* prefixBuffer0,
                                          ::UnityEngine::GraphicsBuffer* prefixBuffer1, ::UnityEngine::GraphicsBuffer* totalLevelCountBuffer, ::UnityEngine::GraphicsBuffer* levelOffsetBuffer,
                                          ::UnityEngine::GraphicsBuffer* indirectDispatchArgsBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12260 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field ownsResources, offset: 0x0, size: 0x1, def value: None
  bool ownsResources;

  /// @brief Field alignedElementCount, offset: 0x4, size: 0x4, def value: None
  int32_t alignedElementCount;

  /// @brief Field maxBufferCount, offset: 0x8, size: 0x4, def value: None
  int32_t maxBufferCount;

  /// @brief Field maxLevelCount, offset: 0xc, size: 0x4, def value: None
  int32_t maxLevelCount;

  /// @brief Field prefixBuffer0, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* prefixBuffer0;

  /// @brief Field prefixBuffer1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* prefixBuffer1;

  /// @brief Field totalLevelCountBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* totalLevelCountBuffer;

  /// @brief Field levelOffsetBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* levelOffsetBuffer;

  /// @brief Field indirectDispatchArgsBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* indirectDispatchArgsBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, ownsResources) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, alignedElementCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, maxBufferCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, maxLevelCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, prefixBuffer0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, prefixBuffer1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, totalLevelCountBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, levelOffsetBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, indirectDispatchArgsBuffer) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum_SupportResources, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.GPUPrefixSum::SupportResources
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/DirectArgs
struct CORDL_TYPE GPUPrefixSum_DirectArgs {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum_DirectArgs();

  // Ctor Parameters [CppParam { name: "exclusive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "input", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "supportResources", ty: "::UnityEngine::Rendering::GPUPrefixSum_SupportResources", modifiers: "",
  // def_value: None }]
  constexpr GPUPrefixSum_DirectArgs(bool exclusive, int32_t inputCount, ::UnityEngine::GraphicsBuffer* input, ::UnityEngine::Rendering::GPUPrefixSum_SupportResources supportResources) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12261 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field exclusive, offset: 0x0, size: 0x1, def value: None
  bool exclusive;

  /// @brief Field inputCount, offset: 0x4, size: 0x4, def value: None
  int32_t inputCount;

  /// @brief Field input, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* input;

  /// @brief Field supportResources, offset: 0x10, size: 0x38, def value: None
  ::UnityEngine::Rendering::GPUPrefixSum_SupportResources supportResources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_DirectArgs, exclusive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_DirectArgs, inputCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_DirectArgs, input) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_DirectArgs, supportResources) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum_DirectArgs, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.GPUPrefixSum::SupportResources
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/IndirectDirectArgs
struct CORDL_TYPE GPUPrefixSum_IndirectDirectArgs {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum_IndirectDirectArgs();

  // Ctor Parameters [CppParam { name: "exclusive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "inputCountBufferByteOffset", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "inputCountBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "input", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "",
  // def_value: None }, CppParam { name: "supportResources", ty: "::UnityEngine::Rendering::GPUPrefixSum_SupportResources", modifiers: "", def_value: None }]
  constexpr GPUPrefixSum_IndirectDirectArgs(bool exclusive, int32_t inputCountBufferByteOffset, ::UnityEngine::ComputeBuffer* inputCountBuffer, ::UnityEngine::GraphicsBuffer* input,
                                            ::UnityEngine::Rendering::GPUPrefixSum_SupportResources supportResources) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12262 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field exclusive, offset: 0x0, size: 0x1, def value: None
  bool exclusive;

  /// @brief Field inputCountBufferByteOffset, offset: 0x4, size: 0x4, def value: None
  int32_t inputCountBufferByteOffset;

  /// @brief Field inputCountBuffer, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* inputCountBuffer;

  /// @brief Field input, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* input;

  /// @brief Field supportResources, offset: 0x18, size: 0x38, def value: None
  ::UnityEngine::Rendering::GPUPrefixSum_SupportResources supportResources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs, exclusive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs, inputCountBufferByteOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs, inputCountBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs, input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs, supportResources) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum/SystemResources
struct CORDL_TYPE GPUPrefixSum_SystemResources {
public:
  // Declarations
  /// @brief Method LoadKernels, addr 0x660bba0, size 0x1d8, virtual false, abstract: false, final false
  inline void LoadKernels();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum_SystemResources();

  // Ctor Parameters [CppParam { name: "computeAsset", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "kernelCalculateLevelDispatchArgsFromConst", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "kernelCalculateLevelDispatchArgsFromBuffer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "kernelPrefixSumOnGroup", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "kernelPrefixSumOnGroupExclusive", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "kernelPrefixSumNextInput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "kernelPrefixSumResolveParent", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "kernelPrefixSumResolveParentExclusive", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GPUPrefixSum_SystemResources(::UnityW<::UnityEngine::ComputeShader> computeAsset, int32_t kernelCalculateLevelDispatchArgsFromConst, int32_t kernelCalculateLevelDispatchArgsFromBuffer,
                                         int32_t kernelPrefixSumOnGroup, int32_t kernelPrefixSumOnGroupExclusive, int32_t kernelPrefixSumNextInput, int32_t kernelPrefixSumResolveParent,
                                         int32_t kernelPrefixSumResolveParentExclusive) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12263 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field computeAsset, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> computeAsset;

  /// @brief Field kernelCalculateLevelDispatchArgsFromConst, offset: 0x8, size: 0x4, def value: None
  int32_t kernelCalculateLevelDispatchArgsFromConst;

  /// @brief Field kernelCalculateLevelDispatchArgsFromBuffer, offset: 0xc, size: 0x4, def value: None
  int32_t kernelCalculateLevelDispatchArgsFromBuffer;

  /// @brief Field kernelPrefixSumOnGroup, offset: 0x10, size: 0x4, def value: None
  int32_t kernelPrefixSumOnGroup;

  /// @brief Field kernelPrefixSumOnGroupExclusive, offset: 0x14, size: 0x4, def value: None
  int32_t kernelPrefixSumOnGroupExclusive;

  /// @brief Field kernelPrefixSumNextInput, offset: 0x18, size: 0x4, def value: None
  int32_t kernelPrefixSumNextInput;

  /// @brief Field kernelPrefixSumResolveParent, offset: 0x1c, size: 0x4, def value: None
  int32_t kernelPrefixSumResolveParent;

  /// @brief Field kernelPrefixSumResolveParentExclusive, offset: 0x20, size: 0x4, def value: None
  int32_t kernelPrefixSumResolveParentExclusive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, computeAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, kernelCalculateLevelDispatchArgsFromConst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, kernelCalculateLevelDispatchArgsFromBuffer) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, kernelPrefixSumOnGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, kernelPrefixSumOnGroupExclusive) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, kernelPrefixSumNextInput) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, kernelPrefixSumResolveParent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, kernelPrefixSumResolveParentExclusive) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum_SystemResources, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUPrefixSum/ShaderIDs
class CORDL_TYPE GPUPrefixSum_ShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _InputBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputBuffer, put = setStaticF__InputBuffer)) int32_t _InputBuffer;

  /// @brief Field _InputCountBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputCountBuffer, put = setStaticF__InputCountBuffer)) int32_t _InputCountBuffer;

  /// @brief Field _LevelsOffsetsBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LevelsOffsetsBuffer, put = setStaticF__LevelsOffsetsBuffer)) int32_t _LevelsOffsetsBuffer;

  /// @brief Field _OutputBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputBuffer, put = setStaticF__OutputBuffer)) int32_t _OutputBuffer;

  /// @brief Field _OutputDispatchLevelArgsBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputDispatchLevelArgsBuffer, put = setStaticF__OutputDispatchLevelArgsBuffer)) int32_t _OutputDispatchLevelArgsBuffer;

  /// @brief Field _OutputLevelsOffsetsBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputLevelsOffsetsBuffer, put = setStaticF__OutputLevelsOffsetsBuffer)) int32_t _OutputLevelsOffsetsBuffer;

  /// @brief Field _OutputTotalLevelsBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputTotalLevelsBuffer, put = setStaticF__OutputTotalLevelsBuffer)) int32_t _OutputTotalLevelsBuffer;

  /// @brief Field _PrefixSumIntArgs, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__PrefixSumIntArgs, put = setStaticF__PrefixSumIntArgs)) int32_t _PrefixSumIntArgs;

  /// @brief Field _TotalLevelsBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TotalLevelsBuffer, put = setStaticF__TotalLevelsBuffer)) int32_t _TotalLevelsBuffer;

  static inline int32_t getStaticF__InputBuffer();

  static inline int32_t getStaticF__InputCountBuffer();

  static inline int32_t getStaticF__LevelsOffsetsBuffer();

  static inline int32_t getStaticF__OutputBuffer();

  static inline int32_t getStaticF__OutputDispatchLevelArgsBuffer();

  static inline int32_t getStaticF__OutputLevelsOffsetsBuffer();

  static inline int32_t getStaticF__OutputTotalLevelsBuffer();

  static inline int32_t getStaticF__PrefixSumIntArgs();

  static inline int32_t getStaticF__TotalLevelsBuffer();

  static inline void setStaticF__InputBuffer(int32_t value);

  static inline void setStaticF__InputCountBuffer(int32_t value);

  static inline void setStaticF__LevelsOffsetsBuffer(int32_t value);

  static inline void setStaticF__OutputBuffer(int32_t value);

  static inline void setStaticF__OutputDispatchLevelArgsBuffer(int32_t value);

  static inline void setStaticF__OutputLevelsOffsetsBuffer(int32_t value);

  static inline void setStaticF__OutputTotalLevelsBuffer(int32_t value);

  static inline void setStaticF__PrefixSumIntArgs(int32_t value);

  static inline void setStaticF__TotalLevelsBuffer(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum_ShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUPrefixSum_ShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUPrefixSum_ShaderIDs(GPUPrefixSum_ShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUPrefixSum_ShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUPrefixSum_ShaderIDs(GPUPrefixSum_ShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12264 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.GPUPrefixSum::SystemResources
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUPrefixSum
struct CORDL_TYPE GPUPrefixSum {
public:
  // Declarations
  using DirectArgs = ::UnityEngine::Rendering::GPUPrefixSum_DirectArgs;

  using IndirectDirectArgs = ::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs;

  using LevelOffsets = ::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets;

  using RenderGraphResources = ::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources;

  using ShaderDefs = ::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs;

  using ShaderIDs = ::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs;

  using SupportResources = ::UnityEngine::Rendering::GPUPrefixSum_SupportResources;

  using SystemResources = ::UnityEngine::Rendering::GPUPrefixSum_SystemResources;

  /// @brief Method DispatchDirect, addr 0x660c108, size 0x1f0, virtual false, abstract: false, final false
  inline void DispatchDirect(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_DirectArgs> arguments);

  /// @brief Method DispatchIndirect, addr 0x660c2f8, size 0x1e4, virtual false, abstract: false, final false
  inline void DispatchIndirect(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs> arguments);

  /// @brief Method ExecuteCommonIndirect, addr 0x660bd8c, size 0x37c, virtual false, abstract: false, final false
  inline void ExecuteCommonIndirect(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::GraphicsBuffer* inputBuffer,
                                    ::ByRef<::UnityEngine::Rendering::GPUPrefixSum_SupportResources> supportResources, bool isExclusive);

  /// @brief Method PackPrefixSumArgs, addr 0x660bd78, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 PackPrefixSumArgs(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method .ctor, addr 0x660bb8c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::GPUPrefixSum_SystemResources resources);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUPrefixSum();

  // Ctor Parameters [CppParam { name: "resources", ty: "::UnityEngine::Rendering::GPUPrefixSum_SystemResources", modifiers: "", def_value: None }]
  constexpr GPUPrefixSum(::UnityEngine::Rendering::GPUPrefixSum_SystemResources resources) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12265 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field resources, offset: 0x0, size: 0x28, def value: None
  ::UnityEngine::Rendering::GPUPrefixSum_SystemResources resources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUPrefixSum, resources) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUPrefixSum, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum_ShaderDefs*, "UnityEngine.Rendering", "GPUPrefixSum/ShaderDefs");
NEED_NO_BOX(::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum_ShaderIDs*, "UnityEngine.Rendering", "GPUPrefixSum/ShaderIDs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum, "UnityEngine.Rendering", "GPUPrefixSum");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum_DirectArgs, "UnityEngine.Rendering", "GPUPrefixSum/DirectArgs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum_IndirectDirectArgs, "UnityEngine.Rendering", "GPUPrefixSum/IndirectDirectArgs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum_LevelOffsets, "UnityEngine.Rendering", "GPUPrefixSum/LevelOffsets");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum_RenderGraphResources, "UnityEngine.Rendering", "GPUPrefixSum/RenderGraphResources");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum_SupportResources, "UnityEngine.Rendering", "GPUPrefixSum/SupportResources");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUPrefixSum_SystemResources, "UnityEngine.Rendering", "GPUPrefixSum/SystemResources");
