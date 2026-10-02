#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RestructureBvh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RestructureBvh)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BottomLevelLevelAccelStruct;
}
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysShaders;
}
namespace UnityEngine::Rendering::RadeonRays {
struct RestructureBvh_ScratchBufferLayout;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class RestructureBvh;
}
namespace UnityEngine::Rendering::RadeonRays {
struct RestructureBvh_ScratchBufferLayout;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::RestructureBvh*);
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::RestructureBvh*, "UnityEngine.Rendering.RadeonRays", "RestructureBvh");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout, "UnityEngine.Rendering.RadeonRays", "RestructureBvh/ScratchBufferLayout");
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.RestructureBvh/ScratchBufferLayout
struct CORDL_TYPE RestructureBvh_ScratchBufferLayout {
public:
  // Declarations
  /// @brief Method Create, addr 0x6dfe5a8, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout Create(uint32_t triangleCount);

  /// @brief Method Reserve, addr 0x6dfe6f8, size 0x14, virtual false, abstract: false, final false
  inline uint32_t Reserve(uint32_t size);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RestructureBvh_ScratchBufferLayout();

  // Ctor Parameters [CppParam { name: "LeafParents", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TreeletCount", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "TreeletRoots", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PrimitiveCounts", ty: "uint32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "TotalSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RestructureBvh_ScratchBufferLayout(uint32_t LeafParents, uint32_t TreeletCount, uint32_t TreeletRoots, uint32_t PrimitiveCounts, uint32_t TotalSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20444 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field LeafParents, offset: 0x0, size: 0x4, def value: None
  uint32_t LeafParents;

  /// @brief Field TreeletCount, offset: 0x4, size: 0x4, def value: None
  uint32_t TreeletCount;

  /// @brief Field TreeletRoots, offset: 0x8, size: 0x4, def value: None
  uint32_t TreeletRoots;

  /// @brief Field PrimitiveCounts, offset: 0xc, size: 0x4, def value: None
  uint32_t PrimitiveCounts;

  /// @brief Field TotalSize, offset: 0x10, size: 0x4, def value: None
  uint32_t TotalSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout, LeafParents) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout, TreeletCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout, TreeletRoots) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout, PrimitiveCounts) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout, TotalSize) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout) == 0x14, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.RestructureBvh
class CORDL_TYPE RestructureBvh : public ::System::Object {
public:
  // Declarations
  using ScratchBufferLayout = ::UnityEngine::Rendering::RadeonRays::RestructureBvh_ScratchBufferLayout;

  /// @brief Field kernelFindTreeletRoots, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelFindTreeletRoots, put = __cordl_internal_set_kernelFindTreeletRoots)) int32_t kernelFindTreeletRoots;

  /// @brief Field kernelInitPrimitiveCounts, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelInitPrimitiveCounts, put = __cordl_internal_set_kernelInitPrimitiveCounts)) int32_t kernelInitPrimitiveCounts;

  /// @brief Field kernelPrepareTreeletsDispatchSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelPrepareTreeletsDispatchSize, put = __cordl_internal_set_kernelPrepareTreeletsDispatchSize)) int32_t kernelPrepareTreeletsDispatchSize;

  /// @brief Field kernelRestructure, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelRestructure, put = __cordl_internal_set_kernelRestructure)) int32_t kernelRestructure;

  /// @brief Field shader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_shader, put = __cordl_internal_set_shader)) ::UnityW<::UnityEngine::ComputeShader> shader;

  /// @brief Field treeletDispatchIndirectBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_treeletDispatchIndirectBuffer, put = __cordl_internal_set_treeletDispatchIndirectBuffer)) ::UnityEngine::GraphicsBuffer* treeletDispatchIndirectBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BindKernelArguments, addr 0x6dfe5d0, size 0x128, virtual false, abstract: false, final false
  inline void BindKernelArguments(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t kernel, ::UnityEngine::GraphicsBuffer* vertices, ::UnityEngine::GraphicsBuffer* scratch,
                                  ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct result);

  /// @brief Method Dispose, addr 0x6dfd428, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Execute, addr 0x6dfd6f4, size 0x394, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* vertices, int32_t verticesOffset, uint32_t vertexStride, uint32_t triangleCount,
                      ::UnityEngine::GraphicsBuffer* scratch, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct> result);

  /// @brief Method GetBvhNodeCount, addr 0x6dfe5c8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t GetBvhNodeCount(uint32_t leafCount);

  /// @brief Method GetScratchDataSizeInDwords, addr 0x6dfdb54, size 0x8, virtual false, abstract: false, final false
  inline uint64_t GetScratchDataSizeInDwords(uint32_t triangleCount);

  static inline ::UnityEngine::Rendering::RadeonRays::RestructureBvh* New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

  constexpr int32_t const& __cordl_internal_get_kernelFindTreeletRoots() const;

  constexpr int32_t& __cordl_internal_get_kernelFindTreeletRoots();

  constexpr int32_t const& __cordl_internal_get_kernelInitPrimitiveCounts() const;

  constexpr int32_t& __cordl_internal_get_kernelInitPrimitiveCounts();

  constexpr int32_t const& __cordl_internal_get_kernelPrepareTreeletsDispatchSize() const;

  constexpr int32_t& __cordl_internal_get_kernelPrepareTreeletsDispatchSize();

  constexpr int32_t const& __cordl_internal_get_kernelRestructure() const;

  constexpr int32_t& __cordl_internal_get_kernelRestructure();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_shader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_shader();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_treeletDispatchIndirectBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_treeletDispatchIndirectBuffer();

  constexpr void __cordl_internal_set_kernelFindTreeletRoots(int32_t value);

  constexpr void __cordl_internal_set_kernelInitPrimitiveCounts(int32_t value);

  constexpr void __cordl_internal_set_kernelPrepareTreeletsDispatchSize(int32_t value);

  constexpr void __cordl_internal_set_kernelRestructure(int32_t value);

  constexpr void __cordl_internal_set_shader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_treeletDispatchIndirectBuffer(::UnityEngine::GraphicsBuffer* value);

  /// @brief Method .ctor, addr 0x6dfd2b4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestructureBvh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RestructureBvh", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestructureBvh(RestructureBvh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestructureBvh", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestructureBvh(RestructureBvh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20445 };

  /// @brief Field kGroupSize offset 0xffffffff size 0x4
  static constexpr uint32_t kGroupSize{ static_cast<uint32_t>(0x100u) };

  /// @brief Field kMaxThreadGroupsPerDispatch offset 0xffffffff size 0x4
  static constexpr int32_t kMaxThreadGroupsPerDispatch{ static_cast<int32_t>(0xffff) };

  /// @brief Field kMinPrimitivesPerTreelet offset 0xffffffff size 0x4
  static constexpr uint32_t kMinPrimitivesPerTreelet{ static_cast<uint32_t>(0x40u) };

  /// @brief Field kTrianglesPerGroup offset 0xffffffff size 0x4
  static constexpr uint32_t kTrianglesPerGroup{ static_cast<uint32_t>(0x800u) };

  /// @brief Field kTrianglesPerThread offset 0xffffffff size 0x4
  static constexpr uint32_t kTrianglesPerThread{ static_cast<uint32_t>(0x8u) };

  /// @brief Field numIterations offset 0xffffffff size 0x4
  static constexpr int32_t numIterations{ static_cast<int32_t>(0x3) };

  /// @brief Field shader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___shader;

  /// @brief Field kernelInitPrimitiveCounts, offset: 0x18, size: 0x4, def value: None
  int32_t ___kernelInitPrimitiveCounts;

  /// @brief Field kernelFindTreeletRoots, offset: 0x1c, size: 0x4, def value: None
  int32_t ___kernelFindTreeletRoots;

  /// @brief Field kernelRestructure, offset: 0x20, size: 0x4, def value: None
  int32_t ___kernelRestructure;

  /// @brief Field kernelPrepareTreeletsDispatchSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___kernelPrepareTreeletsDispatchSize;

  /// @brief Field treeletDispatchIndirectBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___treeletDispatchIndirectBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh, ___shader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh, ___kernelInitPrimitiveCounts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh, ___kernelFindTreeletRoots) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh, ___kernelRestructure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh, ___kernelPrepareTreeletsDispatchSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::RestructureBvh, ___treeletDispatchIndirectBuffer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::RestructureBvh) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
